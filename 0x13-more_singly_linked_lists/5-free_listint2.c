#include "lists.h"

/**
 * free_listint2 - frees up all the memory allocated for a listint
 * and sets the head to NULL
 * @head: points to a node on the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
