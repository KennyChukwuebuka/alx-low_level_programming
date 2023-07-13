#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that alloc and checks
 * @b: params
 * Return: 98 if fails or success
 */

void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);

	if (mal == NULL)
		exit(98);

	return (mal);
}
