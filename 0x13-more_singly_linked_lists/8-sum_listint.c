#include "lists.h"

/**
 * sum_listint - Function that return sum of data
 * @head: Params
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum_of_data = 0;
	listint_t *tp_head = head;

	while (tp_head)
	{
		sum_of_data += tp_head->n;
		tp_head = tp_head->next;
	}
	return (sum_of_data);
}
