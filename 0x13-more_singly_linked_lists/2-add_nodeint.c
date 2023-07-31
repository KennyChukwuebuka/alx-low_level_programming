#include "lists.h"

/**
 * add_nodeint - Function that adds a new node
 * @head: Params
 * @n: Params
 * Return: Address of new ele OR NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *another_node = (listint_t *)malloc(sizeof(listint_t));

	if (!another_node)
		return (NULL);

	another_node->n = n;
	another_node->next = *head;
	*head = another_node;

	return (another_node);
}
