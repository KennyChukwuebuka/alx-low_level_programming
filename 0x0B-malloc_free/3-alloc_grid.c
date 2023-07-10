#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * @width: width parameter
 * @height: height parameter
 * Return: Null on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	grid = (int **)malloc(height * sizeof(int *));

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(height * sizeof(int));

			if (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					grid[i][j] = 0;
				}
			}
			else
			{
				for (k = 0; k < i; k++)
				{
					free(grid[k]);
				}
				free(grid);
				return (NULL);
			}
		}
	}
	return (grid);
}
