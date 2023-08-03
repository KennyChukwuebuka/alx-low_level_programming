#include "main.h"

/**
 * print_binary - Function that prints binary representation of a number
 * @n: Params
 *
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	int i;
	int bit = 0;
	/*int size_bit = sizeof(unsigned long int) * bit;*/
	unsigned long int ret;

	for (i = 63; i >= 0; i--)
	{
		ret = n >> i;
		/*_putchar((n & ret) ? '1' : '0');*/
		if (ret & 1)
		{
			_putchar('1');
			bit++;
		}
		else if (bit)
			_putchar('0');
	}
	if (!bit)
		_putchar('0');
}
