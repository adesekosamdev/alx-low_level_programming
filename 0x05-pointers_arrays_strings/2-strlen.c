#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: string length
 **/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
