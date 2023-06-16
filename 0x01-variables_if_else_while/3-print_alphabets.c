#include <stdio.h>
/**
 * main - A script to print upper and lower case
 * Return: 0
 */
int main(void)
{
	char low = 'a';
	char upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);
}
