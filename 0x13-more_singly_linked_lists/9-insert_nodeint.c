#include "lists.h"
/**
 * insert_nodeint_at_index - Function explains it self
 * @head: Params
 * @idx: index params
 * @n: Params
 *
 * Return: Address OR NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ind;
	listint_t *new_node;
	listint_t *tp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (ind = 0; tp && ind < idx; ind++)
	{
		if (ind == idx - 1)
		{
			new_node->next = tp->next;
			tp->next = new_node;
			return (new_node);
		}
		else
		{
			tp = tp->next;
		}
	}
	return (NULL);

}
