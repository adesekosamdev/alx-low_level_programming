#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: a pointer to the beginning of the located string or NULL if not found
 **/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int l;
	int t;

	if (!haystack || !needle)
	{
		return(NULL); /* handle null pointers*/
	}
	for (l = 0; needle[l] != '\0'; l++)
	{
	}

	for (t = 0; haystack[t] != '\0'; t++)
	{
	}

	for (i = 0; i <= t - l; i++)
	{
		/* ensure that the remaining length of haystack is at least equal to length of needle */
		j = 0;
		while (j < l && haystack[i + j] == needle[j])
		{

			j++;
		}
		if (j == l)
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
