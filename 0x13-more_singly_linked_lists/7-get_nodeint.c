#include "lists.h"

/**
 * get_nodeint_at_index - Function that return nth node
 * @head: Params
 * @index: Params
 *
 * Return: NULL if node not exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*unsigned int initial_ind = 0;*/
	listint_t *tp_head = head;

	while (tp_head != NULL && index > 0)
	{
		tp_head = tp_head->next;
		index--;
	}

	if (index > 0 || tp_head == NULL)
		return (NULL);

	return (tp_head);

	/*while (tp_head && initial_ind < index)*/
	/*{*/
		/*tp_head = tp_head->next;*/
		/*initial_ind++;*/
	/*}*/
	/*return (initial_ind);*/
}
