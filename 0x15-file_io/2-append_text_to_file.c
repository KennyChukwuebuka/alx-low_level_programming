#include "main.h"

/**
 * append_text_to_file - Function that append text to file
 * @filename: Params
 * @text_content: Params
 *
 * Return: 1 OR -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileopen;
	int filewrite;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			i++;
	}

	fileopen = open(filename, O_WRONLY | O_APPEND);
	filewrite = write(fileopen, text_content, i);

	if (fileopen == -1 || filewrite == -1)
		return (-1);

	close(fileopen);
	return (1);
}
