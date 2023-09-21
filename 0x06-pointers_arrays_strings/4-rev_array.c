#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: length of the array
 * Return: nothing
 **/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int r;
	int temp;

	r = n - 1;
	aux = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (r - i); j++)
		{
			temp = a[j + 1];
			a[j + 1] = a[j];
			a[j] = temp;
		}
	}
}
