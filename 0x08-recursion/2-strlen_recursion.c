#include "main.h"

/**
 * _strlen_recursion - function to print string len
 * @s: string
 * Return: return string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return 1 + _strlen_recursion(s + 1);
}
