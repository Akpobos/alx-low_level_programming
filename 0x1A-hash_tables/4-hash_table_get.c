#include "hash_tables.h"

/**
 * get_node - Get the node object
 *
 * @node: The head node at index
 * @key: The key
 * Return: The associated value
 */
char *get_node(hash_node_t *node, const char *key)
{
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: The hash table
 * @key: The key
 * Return: The associated value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	return (get_node(ht->array[index], key));
}
