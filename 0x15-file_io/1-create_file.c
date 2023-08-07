#include "main.h"

/**
 * create_file - Function that create a file
 * @filename: Params
 * @text_content: Params
 *
 * Return: NULL OR -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, wr, i = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for (; text_content[i];)
			i++;
	}
	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wr = write(file_desc, text_content, i);

	if (file_desc == -1 || wr == -1)
		return (-1);

	close(file_desc);
	return (1);
}
