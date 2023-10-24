#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: address new head
 * @index: index to insert the node.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;
	listint_t *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		count++;
		if (index == (count - 1))
		{
			current = ptr;
			ptr = ptr->next;
			free(current);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
