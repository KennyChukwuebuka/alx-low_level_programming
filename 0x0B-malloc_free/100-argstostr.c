#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Function that concat argstostr
 * @ac: params 1
 * @av: params 2
 * Return: String
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}


