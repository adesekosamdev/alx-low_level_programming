#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: hash table pointer
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *hash_tab;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	hash_tab = malloc(sizeof(hash_table_t));
	if (hash_tab == NULL)
		return (NULL);
	hash_tab->array = array;
	hash_tab->size = size;
	return (hash_tab);
}
