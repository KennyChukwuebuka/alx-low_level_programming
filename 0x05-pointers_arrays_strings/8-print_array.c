#include "main.h"
#include <stdio.h>

/**
 * print_array - This script prints n array
 * @a: array names
 * @n: number of ele
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
