#include "lists.h"

/**
 * get_nodeint_at_index - deletes the head node
 * @head: address new head
 * @index: nth element;
 * Return: head node’s data (n).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count++;
		if (index == (count - 1))
			return (head);
		head = head->next;
	}
	return (NULL);
}
