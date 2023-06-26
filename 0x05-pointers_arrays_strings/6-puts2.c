#include "main.h"
#include <string.h>
/**
 * puts2 - Puts functions that prints characters of string
 * @str: String value to print
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
