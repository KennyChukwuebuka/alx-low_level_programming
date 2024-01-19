#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - function that searches array of integers
 * using the hump search algorithm
 * @array: pointer to the first element of arr to search
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: first index OR -1 if value is NULL or empty
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (prev + jump < size && array[prev + jump] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + jump);
			break;
		}
		prev += jump;

		for (i = prev; i < size && i <= prev + jump; ++i)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[prev]);

			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	printf("Value %d not found in the array\n", value);
	return (-1);
}
