#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: the array or NULL if the function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;
	char *charArray;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (0);
	charArray = (char *)array;
	for (i = 0; i < nmemb; i++)
	{
		charArray[i] = 0;
	}
	return (array);

}
