#include <stdio.h>
/**
 * main - This program prints computer sizes
 * Return: 0
 */
int main(void)
{
	char c;
	int d;
	long int e;
	long long int f;
	float g;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
	return (0);
}
