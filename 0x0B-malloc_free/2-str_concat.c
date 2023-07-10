#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concat two strings
 * @s1: String var A
 * @s2: String var B
 * Return: String
 */

char *str_concat(char *s1, char *s2)
{
	size_t lenA;
	size_t lenB;
	char *conkat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lenA = strlen(s1);
	lenB = strlen(s2);

	conkat = (char *)malloc((lenA + lenB + 1) * sizeof(char));

	if (conkat != NULL)
	{
		strcpy(conkat, s1);
		strcpy(conkat + lenA, s2);
	}
	return (conkat);
}
