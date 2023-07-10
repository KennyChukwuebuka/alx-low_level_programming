#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function used to duplicate string
 * @str: String to check
 * Return: String
 */

char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	dup = (char *)malloc((len + 1) * (sizeof(char)));
			if (dup != NULL)
			{
				strcpy(dup, str);
			}

			return (dup);
}
