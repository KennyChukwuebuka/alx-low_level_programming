#include "main.h"

/**
 * factorial - function of factorial
 * @n: number of factorial
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int res = 1;
		int i;

		for (i = 1; i <= n; ++i)
		{
			res *= i;
		}
		return (res);
	}
}
