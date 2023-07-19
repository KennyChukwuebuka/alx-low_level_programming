#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Function that prints name
 * @name: name to print
 * @f: function pointer
 * Return: characters
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
