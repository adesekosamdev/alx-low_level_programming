#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table
* @key: key to search
* Return: value
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	i = 0;
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (strcmp(temp->key, key) == 0)
					return (temp->value);
				temp = temp->next;
			}
			i++;
		}
		i++;
	}
	return (NULL);
}
