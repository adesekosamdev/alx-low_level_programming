#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: length of the array
 * Return: nothing
 **/

void reverse_array(int *a, int n)
{
	int i, r;
	char reverse_a[1000];

	r = (n -1);

	for (i = 0; i < n; i++)
	{
		reverse_a[i] = a[r - i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = reverse_a[i];
	}
}
