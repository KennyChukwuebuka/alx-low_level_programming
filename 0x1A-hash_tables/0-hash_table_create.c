#include "hash_tables.h"

/**
 * hash_table_create - function that creats a hash table
 * @size: size of the array
 *
 * Return: pointer to newly created array OR NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newTable->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	for (; i < size; i++)
	{
		newTable->array[i] = NULL;
	}
	return (newTable);
}
