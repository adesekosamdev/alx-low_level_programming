#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address new head
 * @idx: index to insert the node.
 * @n: value to insert
 * Return: head node’s data (n).
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current;
	listint_t *newNode;
	listint_t *ptr;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		current = (*head)->next;
		*head = newNode;
		newNode->next = current;
		return (newNode);
	}
	ptr = *head;
	while (ptr != NULL)
	{
		count++;
		if (idx == count)
		{
			current = (ptr)->next;
			(ptr)->next = newNode;
			newNode->next = current;
			return (newNode);
		}
		ptr = ptr->next;
	}
	free (newNode);
	return (NULL);
}
