#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Funtion that executes on ele array
 * @array: array of integers
 * @size: Size
 * @action: pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < (int)(size); i++)
		{
			action(array[i]);
		}
	}
}
