#include "lists.h"

/**
 * free_listint - Function that frees
 * @head: Params
 *
 * Return: free all
 */

void free_listint(listint_t *head)
{
	listint_t *tp_free;

	while (head)
	{
		tp_free = head->next;
		free(head);
		head = tp_free;
	}
}
