#include "main.h"

/** _memset - fills memory with a constant byte
 * @s: pointer to the memory block to fill
 * @b: the byte value to set
 * @n: the number of bytes to set to the specified value
 * Return: filled memory
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return(s);
}
