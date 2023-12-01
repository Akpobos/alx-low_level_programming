#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the array
 * Return: Pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(*hash_table));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(*(hash_table->array)) * hash_table->size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		hash_table = NULL;
		return (NULL);
	}

	return (hash_table);
}

