#include "hash_tables.h"

/**
 * free_list - frees linked lists
 * @head: head of the list
 * Return: no return
 */

void free_list(hash_node_t *head)
{
	hash_node_t *temp, *temp2;

	temp = head;
	while (temp)
	{
	temp2 = temp->next;
	free(temp->value);
	free(temp->key);
	free(temp);
	temp = temp2;
	}
}

/**
  * hash_table_delete - frees hash table
  * @ht: hash table
  * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
