#include <stdio.h>
/**
 * main - This script prints hexadecimal numbers
 * Return: 0
 */
int main(void)
{
	int my_num;

	for (my_num = 0; my_num <= 15; my_num++)
	{
		if (my_num < 10)
		{
			putchar(my_num + '0');
		}
		else
		{
			putchar(my_num - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
