#include "main.h"

int natural_check(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function to check if string is palindrome
 * @s: string to rev
 * Return: 1 if palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (natural_check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - ret lenght of string
 * @s: string to calc
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * natural_check - check char recursively
 * @s: checks string
 * @i: iterator
 * @len: length of str
 * Return: 1 if palindrome or 0
 */
int natural_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (natural_check(s, i + 1, len - 1));
}
