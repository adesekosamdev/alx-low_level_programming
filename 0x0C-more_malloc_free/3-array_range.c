#include <stdlib.h>

/**
 * creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the arraya
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int size;
	int *intArray;
	int i;
	int j;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	intArray = malloc(sizeof(int) * size);
	if (intArray == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		intArray[j] = i;
		j++;
	}

	return (intArray);
}
