#include "main.h"

/**
 * rev_string - revserses a string
 * @s: string to be reversed
 * Return: nothing
 **/

void rev_string(char *s)
{
	int l = 0;

	int j = 0;

	char reverse_s[1000];

	while (s[l] != '\0')
	{
		l++;
	}

	for (; l > 0; l--)
	{
		reverse_s[j] = s[l - 1];
		j++;
	}

	while (l < j)
	{
		s[l] = reverse_s[l];
		l++;
	}
}
