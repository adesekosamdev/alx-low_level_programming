#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * via malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory bloc
 * Return: new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old;
	char *new;
	char *newPtr;
	unsigned int i;

	if (ptr != NULL)
	{
		old = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	new = newPtr;
	for (i = 0; (i < old_size && i < new_size); i++)
	{
		new[i] = old[i];
	}
	free(ptr);
	return (newPtr);
}
