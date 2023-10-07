#include "hash_tables.h"

/**
 * set_keyvalue - function sets and mallocs a key/value
 * pair to the hash table
 * @key: the key, a string that cannot be empty
 * @value: the value associated with the key, can be an empty string
 *
 * Return: pointer to the new node
 */
hash_node_t *set_keyvalue(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * set_keyvalue_only - function that control collusion and
 * ensure no collusion. set key:value pair to first array element
 *
 * @ht: pointer to the hash table
 * @key: the key, a string that cannot be empty
 * @value: the value associated with the key, can be an empty string
 * @index: the key's index
 *
 * Return: the node, or NULL if failed
 */
int set_keyvalue_only(hash_table_t *ht, const char *key,
		  const char *value, unsigned long int index)
{
	hash_node_t *node = set_keyvalue(key, value);

	if (node == NULL)
		return (0);
	node->next = NULL;
	ht->array[index] = node;
	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: a pointer to the hash table array
 * @key: the key, and cannot be empty string
 * @value: the value associated with the key, can be an empty string
 *
 * Return: 1 on success, 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);
	indx = key_index((unsigned char *)key, ht->size);
	node = ht->array[indx];
	if (node == NULL)
		return (set_keyvalue_only(ht, key, value, indx));
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);
			free(node->value);
			node->value = malloc(strlen(value) + 1);
			if (node->value == NULL)
				return (0);
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		node = set_keyvalue(key, value);
		if (node == NULL)
			return (0);
		node->next = ht->array[indx];
		ht->array[indx] = node;
		return (1);
	}
	return (0);
}
