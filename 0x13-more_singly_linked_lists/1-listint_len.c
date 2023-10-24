#include "lists.h"

/**
* listint_len - check the code for Holberton School students.
* @h: head
* Return: numbers of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
