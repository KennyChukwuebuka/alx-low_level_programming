#include <stdio.h>
/**
 * main - Prints fifty fibo numbers
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, fib_sum;

	printf("%lu, %lu", fib1, fib2)

		for (count = 3; count <= 98; count++)
		{
			fib_sum = fib1 + fib2;
			printf(", %lu", fib_sum);

			fib1 = fib2;
			fib2 = fib_sum;
		}
	printf("\n");

	return (0);
}
