#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the character to be located
 * Return: first occurence of the character if found, otherwise NULL
 **/

char *_strchr(char *s, char c)
{
	char *i;

	for (i = s; *i != c; i++)
	{
		if (*i == 0)
		{
			return (NULL);
		}
	}

	return (i);
}
