#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: string
 * Return: new string
 **/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 123 && s[i] > 96)
		{
			s[i] = (s[i] - 32);
		}
	}

	return (s);
}
