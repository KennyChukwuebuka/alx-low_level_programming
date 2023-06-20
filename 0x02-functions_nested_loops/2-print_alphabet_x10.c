#include "main.h"
/**
 * print_alphabet_x10 - This file print alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
