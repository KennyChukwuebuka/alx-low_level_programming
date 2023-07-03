#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints a chessboard
 * @a: char to print
 * Return: chess characters
 */

void print_chessboard(char (*a)[8])
{
	int r = 0;
	int c = 0;

	for (; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
			/*_putchar(' ');*/
		}
		_putchar('\n');
	}
}
