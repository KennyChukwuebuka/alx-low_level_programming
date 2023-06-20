#include <stdio.h>
/**
 * main - find and print the val sum
 * Return: 0
 */
int main(void)
{
	int n;
	unsigned long int i, j, k, l;

	i = 1;
	j = 2;
	k = 0;

	for (n = 1; n <= 33; n++)
	{
		if (i < 4000000 && (j % 2) == 0)
		{
			l = l + i;
		}
		k = i + j;
		j = k;
	}
	printf("%lu\n", l);
	return (0);
}

