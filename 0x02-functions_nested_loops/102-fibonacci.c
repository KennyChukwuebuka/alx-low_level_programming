#include <stdio.h>
/**
 * main - Prints fifty fibo numbers
 * Return: 0
 */
int main(void)
{
	int co;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (co = 0; co < 50; co++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (co == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
