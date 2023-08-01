#include "lists.h"
/**
 * reverse_listint - Function that reverse a list
 * @head: Params
 *
 * Return: Pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_pointer = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous_pointer;
		previous_pointer = *head;
		*head = next;
	}

	*head = previous_pointer;

	return (*head);
}

