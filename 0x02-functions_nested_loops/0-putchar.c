#include "main.h"
/**
 * main - This program prints putchar
 * Remain:0
 */
int main(void)
{
	char *c = "_putchar";

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	{
		_putchar('\n');
	}
	return (0);
}
