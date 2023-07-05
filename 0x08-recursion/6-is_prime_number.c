#include "main.h"

int real_prime(int n, int i);

/**
 * is_prime_number - Prime number
 * @n: the number
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - actual prime number
 * @n: number
 * @i: intial number
 * Return: 1 if prime 0 if not
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
