#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all
 * @n: params
 * @...: other parameters on n numbers
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);
		sum += arg;
	}
		/*sum += va_arg(args, int);*/
	va_end(args);

	return (sum);
}

