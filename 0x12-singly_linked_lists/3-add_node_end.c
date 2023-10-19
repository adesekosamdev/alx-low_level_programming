#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: string length
 **/

int _strlen(const char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end - adds a new node to end of linked list
 * @head: pointer to pointer to linked list
 * @str: used to set the str attribute of the new node
 *
 * Return: address of linked list of NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
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
