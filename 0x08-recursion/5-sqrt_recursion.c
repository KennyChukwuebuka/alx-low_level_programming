#include "main.h"

/**
 * _sqrt_recursion_natural - function return sqrt of a number
 * @n: number to return
 * @s: start point
 * @y: end point
 * Return: 0
 */

int _sqrt_recursion_natural(unsigned long int n, int s, int y)
{
	unsigned long int xnd = (s + y) / 2;

	if (s > y)
	{
		return (-1);
	}

	/*unsigned long int xnd = (s + y) / 2;*/

	if (xnd * xnd == n)
	{
		return (xnd);
	}
	else if (xnd * xnd > n)
	{
		return (_sqrt_recursion_natural(n, s, xnd - 1));
	}
	else
	{
		return (_sqrt_recursion_natural(n, xnd + 1, y));
	}
}

/**
 * _sqrt_recursion - function return sqrt
 * @n: number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_natural(n, 0, n));
}


