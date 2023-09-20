#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting string
 **/

char *_strcat(char *dest, char *src)
{
	int destlength, srclength, i;

	for (destlength = 0; dest[destlength] != '\0'; destlength++)
	{
	}

	for (srclength = 0; src[srclength] != '\0'; srclength++)
	{
	}

	for (i = 0; i < srclength; i++)
	{
		dest[destsize + i] = src[i];
	}

	return (dest);
}
