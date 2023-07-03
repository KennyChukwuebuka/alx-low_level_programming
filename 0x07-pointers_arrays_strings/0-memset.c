#include "main.h"
#include <string.h>

/**
 * _memset - Copies the character s
 * @s: Pointer to the memory to be filled
 * @b: value to be set
 * @n: number of byte to be set
 * Return: return pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; n++)
		s[i] = b;
	n--;
	return (s);
}
