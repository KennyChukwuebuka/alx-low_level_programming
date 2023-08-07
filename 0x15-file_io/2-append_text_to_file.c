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
	ssize_t filewrite;
	int i = 0;

	if (filename == NULL)
		return (-1);

	/*if (text_content != NULL)*/
	/*{*/
	/*	for (; text_content[i]; i++)*/
	/*		i++;*/
	/*}*/

	fileopen = open(filename, O_WRONLY | O_APPEND);

	if (fileopen == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fileopen);
		return (1);
	}
	while (text_content[i])
		i++;

	filewrite = write(fileopen, text_content, i);
	close(fileopen);

	/*if (fileopen == -1 || */
	if (filewrite == -1)
		return (-1);

	/*close(fileopen);*/
	return (1);
}
