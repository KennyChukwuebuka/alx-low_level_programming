#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * @...: n number of entry
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_entry;
	unsigned int num_index;

	va_start(num_entry, n);

	for (num_index = 0; num_index < n; num_index++)
	{
		printf("%d", va_arg(num_entry, int));

		if (num_index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num_entry);
}

