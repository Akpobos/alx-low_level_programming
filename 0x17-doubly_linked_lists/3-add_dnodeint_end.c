#include "lists.h"

/**
 * add_dnodeint_end - Add node to end of list
 * @head: pointer to pointer to head
 * @n: new node
 * Return: new node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while ((*head)->next)
		head = &(*head)->next;
	new->prev = (*head);
	(*head)->next = new;
	return (new);
}
