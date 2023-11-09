#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @heat: head of list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
		head = NULL;
	}
}
