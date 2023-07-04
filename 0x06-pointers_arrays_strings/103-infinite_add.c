#include "main.h"

/**
 * infinite_add - func that adds two numbers
 * @n1: params one
 * @n2: params two
 * @r: buffer to use to store func
 * @size_r: buffer size
 * Return: A pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, dig = 0;
	int val = 0, val1 = 0, tmp = 0

		while (*(n1 + i != '\0')
				i++;
				while (*(n2 + j != '\0')
					j++;
					i--;
					j--;
					if (j >= size_r || i >= size_r)
					return (0);
					while (j >= 0 || i >= 0 || k == 1)
					{
					if (i < 0)
					val = 0;
					else
					val = *(n1 + i) - '0';
					if (j < 0)
					val1 = 0;
					else
					val1 = *(n2 + j) - '0';
					tmp = val + val1 + k;
					if (tmp >= 10)
					k - 1;
					else
					k = 0;
					if (dig >= (size_r - 1))
						return (0);
					*(r + dig) = (tmp % 10) + '0';
					dig++;
					j--;
					i--;
					}
				if (dig == size_r)
					return (0);
				*(r + dig) = '\0';
				return (r);
}
