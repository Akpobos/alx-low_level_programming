#include "hash_tables.h"

/**
 * create_hash_node - Create a hash node object
 *
 * @node: The node at key index of the array
 * @key: The key
 * @value: The value
 * Return: 1 if success else 0
 */
int create_hash_node(hash_node_t *node, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);
	new_node->next = NULL;
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		new_node = NULL;
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		new_node->key = NULL;
		free(new_node);
		new_node = NULL;
		return (0);
	}
	if (node == NULL)
		node = new_node;
	else
	{
		new_node->next = node;
		node = new_node;
	}
	return (1);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: The hash table
 * @key: The key
 * @value: The value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	return (create_hash_node(ht->array[index], key, value));
}
