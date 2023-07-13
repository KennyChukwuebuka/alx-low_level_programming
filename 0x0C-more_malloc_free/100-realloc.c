#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - realloc memory block
 * @ptr: Pointer
 * @old_size: old mem size
 * @new_size: new mem size
 * Return: ptr or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int cp_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	cp_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, cp_size);

	return (ptr);
}
