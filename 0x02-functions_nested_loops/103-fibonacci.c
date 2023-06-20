#include <stdio.h>
/**
 * main - find and print the val sum
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k, l = 0;

	while (i < 4000000)
	{
		if (i % 2 == 0)
			l += i;
		k = i + j;
		i = j;
		j = k;
	}
	printf("%lu\n", l);
	return (0);
}
