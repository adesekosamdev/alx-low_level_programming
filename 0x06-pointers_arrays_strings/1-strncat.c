#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of source string to be used
 * Return: new string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int destlength, srclength, i;

	for (destlength = 0; dest[destlength] != '\0'; destlength++)
	{
	}

	for (srclength = 0; src[srclength] != '\0'; srclength++)
	{
	}

	if (n > srclength)
	{
		for (i = 0; i < srclength; i++)
		{
			dest[destlength + i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[destlength + i] = src[i];
		}
	}

	return (dest);
}
