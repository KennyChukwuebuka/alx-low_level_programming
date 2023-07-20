#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *opps;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	opps = argv[2];
	b = atoi(argv[3]);

	if ((get_op_func(opps) == NULL) || (opps[1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opps == '/' && b == 0) || (*opps == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opps)(a, b));

	return (0);
}


