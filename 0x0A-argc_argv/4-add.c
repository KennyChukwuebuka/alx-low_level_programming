#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * number_checker - check the string
 * @str: string
 * Return: 0
 */

int number_checker(char *str)
{
	unsigned int c;

	c = 0;

	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}

	return (1);
}

/**
 * main - main entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c, str_int, sum = 0;

	c = 1;

	while (c < argc)
	{
		if (number_checker(argv[c]))
		{
			str_int = atoi(argv[c]);
			sum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);

	return (0);
}

