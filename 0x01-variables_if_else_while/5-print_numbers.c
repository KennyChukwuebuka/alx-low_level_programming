#include <stdio.h>
/**
 * main - Prints characters of base 10
 * Return: 0
 */
int main(void)
{
	int n = 0;

	do {
		putchar(n + '0');
		n++;
	} while (n <= 9);
	putchar('\n');
	return (0);
}
