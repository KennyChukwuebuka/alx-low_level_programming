#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - function that perfoms a search with LSA
 * @array: pointer to the first ele to search
 * @size: number of ele in an array
 * @value: value to search
 * Return: first index where value is alloc
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			/*printf("Found %d at index: %lu\n", value, i);*/
			return (i);
		}
	}
	return (-1);
}
