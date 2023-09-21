#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: length of the array
 * Return: nothing
 **/

oid reverse_array(int *a, int n)
{
	int aux = 0, i, j;

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < (n - i - 1); j++)
	{
	aux = a[j + 1];
	a[j + 1] = a[j];
	a[j] = aux;
	}
	}
}
