#include "lists.h"
/**
 * delete_nodeint_at_index - Function that delete node
 * @head: Params
 * @index: Params
 *
 * Return: 1(Success) OR -1(failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *tp_node = *head;
	listint_t *current_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tp_node);
		return (1);
	}

	while (idx < index - 1)
	{
		if (!tp_node || !(tp_node->next))
			return (-1);
		tp_node = tp_node->next;
		idx++;
	}

	current_node = tp_node->next;
	tp_node->next = current_node->next;
	free(current_node);

	return (1);

}
