#include "lists.h"

/**
 * dlistint_len - get lent of list
 * @h: points to the head
 * Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
