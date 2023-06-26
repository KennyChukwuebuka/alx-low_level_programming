#include "main.h"
/**
 * swap_int - This script will swap values of two integers
 * @a: Params 1
 * @b: Params 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
