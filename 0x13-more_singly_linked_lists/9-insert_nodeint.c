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
	listint_t *newNode;
	listint_t *current = *head;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || *head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; (current != NULL) && (i < idx); i++)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		else
			current = current->next;
	}
	return (NULL);
}
