#include "lists.h"

/**
 * list_len - gets the length of a list_t list
 * @h: Head to the list
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
