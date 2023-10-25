#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: address new head
 * @index: index to insert the node.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current = *head;
	unsigned int i;

	if (head == NULL || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; current && (i <= index); i++)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
	return (-1);
}
