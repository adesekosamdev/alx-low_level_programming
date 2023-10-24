#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of linked list
 * @head: pointer to pointer to linked list
 * @n: used to set the n attribute of the new node
 *
 * Return: address of linked list of NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;

	return (*head);
}
