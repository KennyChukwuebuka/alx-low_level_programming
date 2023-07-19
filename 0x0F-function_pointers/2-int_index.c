#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for integers
 * @array: array element
 * @size: number of element
 * @cmp: pointer to the function to be used to compare
 * Return: index of first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
