#include "main.h"

/**
 * get_endianness - Function that check multi-byte data type
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int index = 0;
	char *n = (char *) &index;

	return (*n);
}
