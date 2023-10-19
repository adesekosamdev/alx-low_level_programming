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
 * add_node - add a node at the beginning of a list
 * @head: pointer to first node
 * @str: string
 * Return: pointer to list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
