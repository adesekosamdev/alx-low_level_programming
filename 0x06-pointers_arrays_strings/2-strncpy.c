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
	int destlength, srclength, i;

	for (destlength = 0; dest[destlength] != '\0'; destlength++)
	{
	}

	for (srclength = 0; src[srclength] != '\0'; srclength++)
	{
	}

	if (n > (destlength - 1) && (srclength - 1) >= n)
	{
		for (i = 0; i < (destlength - 1); i++)
		{
			dest[i] = src[i];
		}
	}
	else if (n > (srclength - 1) && (destlength - 1) >= n)
	{
		for (i = 0; i < (destlength - 1); i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
