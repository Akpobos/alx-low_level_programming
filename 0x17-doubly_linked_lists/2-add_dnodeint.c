#include "lists.h"

/**
 * add_dnodeint - Add node to start of list
 * @head: points to head pointer
 * @n: new data
 * Return: new adderess
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
