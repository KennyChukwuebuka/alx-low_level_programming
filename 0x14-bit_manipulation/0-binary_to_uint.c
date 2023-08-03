#include "main.h"
/**
 * binary_to_uint - Function that convert binary to unit
 * @b: Params
 *
 * Return: converted number OR 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
	}

	return (val);
}
