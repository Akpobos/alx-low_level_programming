#include "hash_tables.h"

/**
 * free_list - free linked list
 * @node: The list
 * Return: Nothing
 */
void free_list(hash_node_t *node)
{
	if (node != NULL)
	{
		free_list(node->next);
		free(node->key);
		free(node->value);
		free(node);
	}
}

/**
 * hash_table_delete - delete hash table
 *
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht != NULL)
	{
		while (i < ht->size)
		{
			free_list(ht->array[i]);
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
