#include "lists.h"

/**
 * free_listint - frees up all the memory allocated for a list
 * @head: points to a node on the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		free(head->n);
		head = head->next;
		free(temp);
	}
}
