#include "function_pointers.h"

/**
 * int_index - search for int using cmp
 * @array: array to operate on
 * @size: size of array
 * @cmp: compare function
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
