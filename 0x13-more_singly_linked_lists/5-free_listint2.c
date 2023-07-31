#include "lists.h"

/**
 * free_listint2 - Function that frees
 * @head: Params
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t  *tp_free;

	if (head == NULL)
		return;

	while (*head)
	{
		tp_free = (*head)->next;
		free(*head);
		*head = tp_free;
	}
	*head = NULL;
}
