#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *size;

	size = malloc(b);
	if (size == NULL)
		exit(98);

	return (size);
}
