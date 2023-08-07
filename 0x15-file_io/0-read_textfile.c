#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * @letters: Number of letters to read and print
 * @filename: Params of filename
 *
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, wr, tp_f;
	char *buffer;

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	tp_f = read(file_desc, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, tp_f);

	free(buffer);
	close(file_desc);
	return (wr);
}

