#include <stdio.h>
/**
 * main - Print numbers of base 10
 * Return: 0
 */
int main(void)
{
	int my_num;

	for (my_num = 0; my_num <= 9; my_num++)
	{
		putchar(my_num + '0');
	}
	putchar('\n');
	return (0);
}

