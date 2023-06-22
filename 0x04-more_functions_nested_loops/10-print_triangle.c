#include "main.h"
/**
 * print_triangle - This script will print triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if  (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (i = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
