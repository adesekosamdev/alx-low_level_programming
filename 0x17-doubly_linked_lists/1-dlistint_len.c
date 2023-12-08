#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
