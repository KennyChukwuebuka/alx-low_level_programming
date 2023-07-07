#include <stdio.h>
#include "main.h"

/**
 * main - main entry
 * @argc: argument count
 * @argv: argument entry
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
