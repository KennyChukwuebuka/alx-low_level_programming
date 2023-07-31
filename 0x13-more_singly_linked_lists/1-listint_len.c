#include "lists.h"

/**
 * listint_len - Function that returns num of element
 * @h: Params
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t startNum = 0;
	const listint_t *ret = h;

	while (ret)
	{
		startNum++;
		ret = ret->next;
	}
	return (startNum);
}
