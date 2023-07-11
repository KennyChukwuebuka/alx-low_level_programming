#include <stdlib.h>
#include "main.h"

/**
 * word_counting - Function to count words
 * @s: string
 * Return: num of words
 */

int word_counting(char *s)
{
	int x, y, z;

	x = 0;
	z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			z++;
		}
	}
	return (z);
}

/**
 * strtow - Function that split string to word
 * @str: string
 * Return: Success on array or NULL on error
 */

char **strtow(char *str)
{
	char **mem, *temp;
	int i, j = 0, len = 0, wrd, k = 0, stpt, endpt;

	while (*(str + len))
		len++;
	wrd = word_counting(str);
	if (wrd == 0)
		return (NULL);
	mem = (char **)malloc(sizeof(char *) * (wrd + 1));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				endpt = i;
				temp = (char *)malloc(sizeof(char) * (k + 1));
				if (temp == NULL)
					return (NULL);
				while (stpt < endpt)
					*temp++ = str[stpt++];
				*temp = '\0';
				mem[j] = temp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			stpt = i;
	}
	mem[j] = NULL;

	return (mem);
}

