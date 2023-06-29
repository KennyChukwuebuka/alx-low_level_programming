#include "main.h"
#include <stdio.h>

/**
 * rot13 - This script encodes
 * @n: params
 * Return: encode values
 */

char *rot13(char *n)
{
	int i;
	int j;
	char val[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char val1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == val[j])
			{
				n[i] = val1[j];
				break;
			}
		}
	}
	return (n);
}
