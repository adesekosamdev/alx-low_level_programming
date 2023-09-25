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
	int temp;

	for (l = 0; needle[l] != '\0'; l++)
	{
	}

	for (t = 0; haystack[t] != '\0'; t++)
	{
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			/* ensure that the remaining length of haystack is at least equal to length of needle */
			if ((t - (i + 1)) < (l - 1))
			{
				break;
			}
			for (j = 1; j < l; j++)
			{
				temp = 0;
				if (haystack[j + i] != needle[j])
				{
					break;
				}
				temp = 1;
			}
		}
		if (temp == 1)
		{
			return&(haystack[i]);
		}
	}

	return(NULL);
}
