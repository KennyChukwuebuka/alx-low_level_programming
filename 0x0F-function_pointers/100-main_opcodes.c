#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_byte, i;
	char *array;

	array = (char *)main;

	if (argc != 2) /*check if number of argument is not correct*/
	{
		printf("Error\n");
		exit(1);
	}

	num_byte = atoi(argv[1]); /*convert the argument to int*/

	if (num_byte < 0) /*check if the number of byte is negative*/
	{
		printf("Error\n");
		exit(2);
	}
	/*array = (char *)main;*/

	for (i = 0; i < num_byte; i++)
	{
		if (i == num_byte - 1)
		{
			printf("%02hhx\n", array[i]); /*print the bytes in hex*/
			break;
		}
		printf("%02hhx ", array[i]); /*print the bytes in hex*/
	}
	return (0);
}
