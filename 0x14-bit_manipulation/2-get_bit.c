#include "main.h"

/**
 * get_bit - Function that return the value of a bit
 * @n: Params
 * @index: Params
 *
 * Return: bit OR -1 (if fail)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit_val;

	/*if (index < 63)*/
	if (index > 63)
		return (-1);

	get_bit_val = (n >> index) & 1;

	return (get_bit_val);

}
