#include "main.h"

/**
 * clear_bit - Function sets value of bit to 0
 * @n: params
 * @index: index starting from 0
 *
 * Return: 1 OR -1 (fails)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	i = ~(1UL << index);
	*n = (*n) & i;

	return (1);
}
