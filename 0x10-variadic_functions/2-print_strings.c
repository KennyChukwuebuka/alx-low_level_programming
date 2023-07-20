#include "variadic_functions.h"

/**
 * print_strings - function that print string
 * @separator: string to be printed btw strings
 * @n: number of strings passed to the function
 * @...: n number params
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	char *str_ptr;
	unsigned int str_index;

	va_start(string_list, n);

	for (str_index = 0; str_index < n; str_index++)
	{
		str_ptr = va_arg(string_list, char *);

		if (str_ptr == NULL)
			printf("(nil)");
		else
			printf("%s", str_ptr);

		if (str_index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_list);
}

