#include <stdio.h>
/**
 * main - Prints character on the reverse
 * Return: 0
 */
int main(void)
{
	char a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
