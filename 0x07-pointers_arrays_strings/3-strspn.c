#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be examined
 * @accept: string containing a set of characters
 * Return: length of the prefix substring
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n;
	int found;

	n = 0;
	for (i =0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				n++;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
	}
	return (n);
}
