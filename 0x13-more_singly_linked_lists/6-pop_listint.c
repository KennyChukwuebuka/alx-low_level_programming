#include "lists.h"

/**
 * pop_listint - Function that deletes a head node
 * @head: Params
 *
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tp_del;
	int ret;

	if (!head || !*head)
		return (0);

	ret = (*head)->n;
	tp_del = (*head)->next;
	free(*head);
	*head = tp_del;

	return (ret);
}
