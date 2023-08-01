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
	listint_t *current_pointer = *head;
	/*listint_t *next = current_pointer->next;*/

	while (current_pointer != NULL)
	{
		listint_t *next = current_pointer->next;

		current_pointer->next = previous_pointer;
		previous_pointer = current_pointer;
		current_pointer = next;
	}

	*head = previous_pointer;

	return (*head);
}

