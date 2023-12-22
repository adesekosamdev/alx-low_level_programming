#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hsh table.
* @ht: hsh table pointer
* @key: key to search or store
* @value: value to store
* Return: 1 success, 0 Fail
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	unsigned long int hsh;
	hash_node_t *node, *temp;
	char *val, *k;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	if (!value)
		return (0);
	if (key[0] == '\0')
		return (0);
	hsh = hash_djb2((unsigned char *)key);
	idx = hsh % ht->size;
	val = strdup(value);
	temp = ht->array[idx];
	while (temp && strcmp(key, temp->key) != 0)
	{
		temp = temp->next;
	}
	if (temp)
	{
		free(temp->value);
		temp->value = val;
	}
	else
	{
	k = strdup(key);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = k;
	node->value = val;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	}
	return (1);
}
