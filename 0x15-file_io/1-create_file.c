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
	int file_desc, wr, i;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
	}
	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	
	if (file_desc == -1)
		return  (-1);

	wr = write(file_desc, text_content, i);

	if (wr == -1)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}

