#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination where the data will be copied
 * @src: pointer to the source from where the data will be copied
 * @n: the number of bytes to copy
 * Return: destination
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return(dest);
}
