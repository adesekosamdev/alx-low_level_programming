#include "lists.h"

/**
* print_listint - Prints a list
* @h: head
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%i\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
