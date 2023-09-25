#include "main.h"

/**
 * -strchr - locates a character in a string
 *  @s: pointer to the string
 *  @c: the character to be located
 *  Return: first occurence of the character if found, otherwise NULL
 **/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return&(s[i]);
		}
	}

	return(NULL);
}
