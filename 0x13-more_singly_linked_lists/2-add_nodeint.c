#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a list
 * @head: pointer to first node
 * @n: value
 * Return: pointer to list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
