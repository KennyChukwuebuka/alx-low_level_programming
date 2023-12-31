#include "main.h"
#include <string.h>

/**
 * _puts_recursion - Fuctionthat prints a string
 * @s: string to write
 * Return: string value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
