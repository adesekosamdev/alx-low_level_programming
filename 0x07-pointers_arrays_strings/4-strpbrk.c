#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing set of bytes to be searched for
 * Return: pointer to first such byte found or NULL if none is found
 **/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int temp;

	temp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				temp = 1;
			}
		}
		if (temp == 1)
		{
			return (&(s[i]));
		}
	}
	return (NULL);
}
