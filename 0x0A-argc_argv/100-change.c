#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	res = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coins[i])
		{
			res++;
			number -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
