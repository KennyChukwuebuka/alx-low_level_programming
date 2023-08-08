#include "main.h"
/**
 * copy_file - Function that copy file
 * @file_comingfrom: Params
 * @file_goingto: Params
 * Return: 0
 */
void copy_file(char *file_comingfrom, char *file_goingto)
{
	int fd_comingfrom, fd_goingto;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_toread, bytes_towrite;

	fd_comingfrom = open(file_comingfrom, O_RDONLY);
	if (fd_comingfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_comingfrom);
		exit(98);
	}
	fd_goingto = open(file_goingto, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND);
			/*O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);*/
	if (fd_goingto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_goingto);
		exit(99);
	}
	while ((bytes_toread = read(fd_comingfrom, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_towrite = write(fd_goingto, buffer, bytes_toread);
		if (bytes_towrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_goingto);
			exit(99);
		}
	}
	if (bytes_toread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_comingfrom);
		exit(98);
	}
	if (close(fd_comingfrom) == -1 || close(fd_goingto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_comingfrom);
		exit(100);
	}
}

/**
 * main - Entry Point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		/*dprintf(STDERR_FILENO, "Usage: %s file_from_to\n", argv[0]);*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}

