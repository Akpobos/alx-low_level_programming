#include "hash_tables.h"

/**
 * print_node - prints node
 * @node: The linked list
 * @sep: Seperator
 * Return: Notthing
 */
void print_node(hash_node_t *node, char **sep)
{
	if (node != NULL)
	{
		printf("%s'%s': '%s'", *sep, node->key, node->value);
		*sep = ", ";
		print_node(node->next, sep);
	}
}

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: The hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *sep = "";

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			print_node(ht->array[i], &sep);
		i++;
	}
	printf("}\n");
}

