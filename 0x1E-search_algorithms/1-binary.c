#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - function that searches array of int using
 * binary search operation
 * @array: pointer to the first ele to search
 * @size: is the number of ele in array
 * @value: is the value to search
 * Return: if array is NULL or value not present (-1)
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = size - 1;
	/*if arr is null of value not present*/
	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		/*check if value is present at mid*/
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
