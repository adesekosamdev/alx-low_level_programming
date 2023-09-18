#include "main.h"

/**
 * _strcpy - copies one string into another
 * @src: string being copied
 * @dest: string being copied into
 **/

char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;

	while (src[l] != 0)
	{
		l++;
	}

	for (i = 0; i < l; i++)
		dest[i] = src[i];
	return (dest);
}
