#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: difference between both strings
 **/

int _strcmp(char *s1, char *s2)
{
	int s1length, s2length, i, j, diff;

	diff = 0;

	for (s1length = 0; s1[s1length] != '\0'; s1length++)
	{
	}

	for (s2length = 0; s2[s2length] != '\0'; s2length++)
	{
	}

	if (s1length == s2length)
	{
		for (i = 0; i < s1length; i++)
		{
			diff = diff + (s1[i] - s2[i]);
		}

		return (diff);
	}
	else if (s1length > s2length)
	{
		for (i = 0; i < s2length; i++)
		{
			diff = diff + (s1[i] - s2[i]);
		}
		for (j = i; i < s1length; j++)
		{
			diff = diff + s[j];
		}

		return (diff);
	}
	else
	{
		for (i = 0; i < s1length; i++)
		{
			diff = diff + (s1[i] - s2[i]);
		}
		for (j = i; i < s2length; j++)
		{
			diff = diff + s[j];
		}

		return (diff);
	}
}
