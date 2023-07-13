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
	unsigned int len1 = strlen(s1);
	unsigned int len2 = n < strlen(s2) ? n : strlen(s2);
	char *nStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	nStr = malloc(sizeof(char) * (len1 + len2));

	if (nStr == NULL)
		return (NULL);

	memcpy(nStr, s1, len1);
	memcpy(nStr + len1, s2, len2);

	nStr[len1 + len2] = '\0';

	return (nStr);
}
