#include <stdio.h>
/**
 * main - Fibo given giving values
 * Return: 0
 */
int main(void)
{
	unsigned long long int i = 1, j = 2, nxt;
	unsigned long long int sum = 0;

	while (i < 4000000)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		nxt = i + j;
		i = j;
		j = nxt;
	}
	printf("%llu\n", sum);
	return (0);
}
