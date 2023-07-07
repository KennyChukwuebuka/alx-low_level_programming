#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: argument c
 * @argv: argument v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
	{
		printf("0");
	}

	return (0);
}
