#include <stdio.h>
/**
 * main - A script to print upper and lower case
 * Return: 0
 */
int main(void)
{
	char low = 97;
	char upp = 65;

	while (low <= 122)
	{
		putchar(low);
		low++;
	}
	while (upp <= 90)
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);
}
