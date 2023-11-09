#include "lists.h"

/**
 * sum_dlistint - Sums the list data
 * @head: the head
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
