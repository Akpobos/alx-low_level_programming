#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: Head to the list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!(h->str))
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
