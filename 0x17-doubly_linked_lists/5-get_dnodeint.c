#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at position
 * @head: head node
 * @index: position
 * Return: The node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
