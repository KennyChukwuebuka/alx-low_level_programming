#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks digit
 * @s: string
 * Return: 0 or 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - ret length of string
 * @s: string to check
 * Return: len of str
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * error - error handling
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - main entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *a1, *b1;
	int len1, len2, len, i, ca, dig1, dig2, *res, a = 0;

	a1 = argv[1], b1 = argv[2];
	if (argc != 3 || !is_digit(a1) || !is_digit(b1))
		error();
	len1 = _strlen(a1);
	len2 = _strlen(b1);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = a1[len1] - '0';
		ca = 0;
		for (len2 = _strlen(b1) - 1; len2 >= 0; len2--)
		{
			dig2 = b1[len2] - '0';
			ca += res[len1 + len2 + 1] + (dig1 * dig2);
			res[len1 + len2 + 1] = ca % 10;
			ca /= 10;
		}
		if (ca > 0)
			res[len1 + len2 + 1] += ca;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
