#include "main.h"
#include <stdlib.h>

/**
 * _memset - memset function
 * @s: mem area
 * @b: char to copy
 * @n: num to copy
 * Return: pointer to mem
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - function to cal
 * @nmemb: params
 * @size: size of element
 * Return: pointer of alloc mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

