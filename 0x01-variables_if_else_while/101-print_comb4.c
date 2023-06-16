#include <stdio.h>
/**
 * main - print combination of three digits
 * Return: 0
 */
int main(void)
{
	int m, n, o;

	for (m = 48; m < 58; m++)
	{
		for (n = 49; n < 58; n++)
		{
			for (o = 50; 0 < 58; o++)
			{
				if (o > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
