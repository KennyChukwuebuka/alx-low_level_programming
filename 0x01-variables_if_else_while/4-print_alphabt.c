#include <stdio.h>
/**
 * main - Script that ommits q and e characters
 * Return: 0
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
