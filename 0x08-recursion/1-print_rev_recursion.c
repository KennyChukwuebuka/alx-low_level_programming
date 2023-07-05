#include "main.h"

/**
 * _print_rev_recursion - function that prints reverse string
 * @s: String to get
 * Return: string value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
