#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *l = NULL;
	size_t count = 0;
	size_t new;

	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		l = head;
		new = 0;
		while (new < count)
		{
			if (temp == l)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			l = l->next;
			new++;
		}
		if (head == NULL)
			exit(98);
	}
	return (count);
}
