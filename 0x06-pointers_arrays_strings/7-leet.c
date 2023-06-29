#include "main.h"

/**
 * leet - Leet code
 * @n: params
 * Return: A string
 */

char *leet(char *n)
{
	int i = 0, j, k = 5;

	char str[5] = {'A', 'E', 'O', 'T', 'L'};
	char str1[5] = {'4', '3', '0', '7', '1'};

	while (n[i])
	{
		j = 0;

		while (j < k)
		{
			if (n[i] == str[j] || n[i] - 32 == str[j])
				n[i] = str1[j];
			j++;
		}
		i++;
	}
	return (n);
}

