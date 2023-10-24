#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: address new head
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *nextHead;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	nextHead = (*head)->next;
	(*head)->next = NULL;
	free(*head);
	*head = nextHead;

	return (n);
}
