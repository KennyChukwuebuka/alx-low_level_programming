#include "main.h"

/**
 * bit_count_to_set - Function to count bit
 * @n: Params
 *
 * Return: number
 */
unsigned int bit_count_to_set(unsigned long int n)
{
	unsigned int i = 0;

	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}



/**
 * flip_bits - Function that flip bits
 * @n: Params
 * @m: Params
 *
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ret = n ^ m;

	return (bit_count_to_set(ret));
}
