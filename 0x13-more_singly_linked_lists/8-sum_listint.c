#include "lists.h"

/**
 * sum_listint - deletes the head node
 * @head: address new head
 * Return: head node’s data (n).
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
