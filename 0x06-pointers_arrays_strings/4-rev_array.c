#include "main.h"
#include <string.h>

/**
 * reverse_array - This reverse an array of integers
 * @a: initial desc
 * @n: num
 * Return: Integers
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

