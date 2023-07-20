#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - funtion that returns two sum
 * @a: params a
 * @b: params b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that returns difference
 * @a: params a
 * @b: params b
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that returns multiplication
 * @a: params a
 * @b: params b
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that returns division
 * @a: params a
 * @b: params b
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that return remainder
 * @a: params a
 * @b: params b
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
