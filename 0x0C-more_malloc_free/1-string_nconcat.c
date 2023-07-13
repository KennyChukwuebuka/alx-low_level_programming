#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concat two strings
 * @s1: String A
 * @s2: string B
 * @n: number variable
 * Return: String
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *nStr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
		len2 = n;

	nStr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (nStr == NULL)
		return (NULL);

	for (i = 0; i < len1;  i++)
		nStr[i] = s1[i];
	for (j = 0; j < len2; j++)
		nStr[i + j] = s2[j];

	nStr[len1 + len2] = '\0';

	return (nStr);
}
