#include "main.h"

/**
 * _strcat - Script to concat strings
 * @src: This is the source
 * @dest: This is the destination
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length])
		length++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[length] = src[i];
		length += 1;
	}
	dest[length] = '\0';
	return (dest);
}
