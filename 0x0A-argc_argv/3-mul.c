#include <stdio.h>
#include "main.h"

/**
 * _atoi - This converts string to integer
 * @s: string params
 * Return: 0
 */

int _atoi(char *s)
{
	int i, k, n, len, dig, e;

	i = 0;
	k = 0;
	n = 0;
	len = 0;
	dig = 0;
	e = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && e == 0)
	{
		if (s[i] == '-')
			++k;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (k % 2)
				dig = -dig;
			n = n * 10 + dig;
			e = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			e = 0;
		}
		i++;
	}
		if (e == 0)
			return (0);

		return (n);
}

/**
 * main - This is the main entry
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int ret, numA, numB;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numA = _atoi(argv[1]);
	numB = _atoi(argv[2]);
	ret = numA * numB;

	printf("%d\n", ret);

	return (0);
}

