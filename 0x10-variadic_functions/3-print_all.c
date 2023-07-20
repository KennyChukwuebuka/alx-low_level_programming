#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of passed argument
 * @...: n number of args
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char  *s, *ign = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ign, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", ign, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", ign, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);

					if (!s)
						s = "(nil)";
					printf("%s%s", ign, s);
					break;
				default:
					i++;
					continue;
			}
			ign = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}

