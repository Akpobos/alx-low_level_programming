#include "lists.h"

/**
 * insert_dnode - insert nod at position
 * @h: head pointer pointer
 * @new: pointer to pointer to new node
 * @idx: index to insert
 * @i: curr index
 * Return: new node pointer
 */
dlistint_t *insert_dnode(
		dlistint_t **h,
		dlistint_t **new,
		unsigned int idx,
		unsigned int i)
{
	if (i == 0 && idx == 0)
	{
		if (*h == NULL)
			*h = *new;
		else
		{
			(*h)->prev = *new;
			(*new)->next = *h;
			*h = *new;
		}
		return (*new);
	}

	if (i == idx && *h != NULL)
	{
		(*new)->prev = (*h)->prev;
		(*new)->next = *h;
		(*h)->prev = *new;
		(*new)->prev->next = *new;
		return (*new);
	}

	if ((*h)->next == NULL && (i + 1) == idx)
	{
		(*new)->prev = (*h)->next;
		(*h)->next->next = *new;
	}

	if (*h == NULL)
		return (NULL);

	return (insert_dnode(&((*h)->next), new, idx, i + 1));
}

/**
 * insert_dnodeint_at_index - As the name suggest
 * @h: pointer to pointer to head
 * @idx: index node will be inserted
 * @n: node data
 * Return: new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (insert_dnode(h, &new, idx, i));
}
