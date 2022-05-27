#include "hash_tables.h"

/**
* hash_table_create - Function that creates a hash table
*
* @size: Size of the array
* 
* Return: A pointer of hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
		return (NULL);

	ht->size = size;

	return (ht);
}
