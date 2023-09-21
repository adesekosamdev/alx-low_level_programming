#include "main.h"

/**
 * _strncpy - copies a string
 * @src: strimg to be copied
 * @dest: string to be copied into
 * @n: size of bytes of source string to be copied
 * Return: nothing
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int destlength, srclength;
       	int i;

	i = 0;

	for (destlength = 0; dest[destlength] != '\0'; destlength++)
	{
	}

	for (srclength = 0; src[srclength] != '\0'; srclength++)
	{
	}

	while (i < n && i < srclength)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > srclength)
	{
		while (i < destlength && i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
