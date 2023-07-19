#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints name
 * @name: name to print
 * Return: characters
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
