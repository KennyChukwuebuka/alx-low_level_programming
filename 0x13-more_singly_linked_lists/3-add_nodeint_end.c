#include "lists.h"

/**
 * add_nodeint_end - Function that adds node at the end
 * @head: Params
 * @n: Params
 *
 * Return: Address of ele OR NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *another_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current_node = *head;

	if (!another_node)
		return (NULL);

	another_node->n = n;
	another_node->next = NULL;

	if (*head == NULL)
	{
		*head = another_node;
		return (another_node);
	}

	while (current_node->next)
		current_node = current_node->next;
	current_node->next = another_node;

	return (another_node);
}
