#include "lists.h"
/**
 * print_listint - Function that list all ele
 * @h: Param
 *
 * Return: the numeber of node
 */

size_t print_listint(const listint_t *h)
{
	size_t startNum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		startNum++;
		h = h->next;
	}
	return (startNum);
}
