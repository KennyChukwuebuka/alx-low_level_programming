#include "main.h"

/**
 * set_bit - Function that set the value of a bit
 * @n: Params
 * @index: index of bit
 *
 * Return: 1 (success) OF -1 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	i = 1UL << index;
	*n = (*n) | i;

	return (1);
}
