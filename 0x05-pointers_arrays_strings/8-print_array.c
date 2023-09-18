#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an arrray of integers
 * followed by a new line
 * @a: pointer to array
 * @n: number of elements to print
 * Return: nothing
 **/

void print_array(int *a, int n)
{
	int i;

	if (i >= 1)
	{
		printf("%i", a[0]);

		if (n > 1)
			for (i = 1; i < n; i++)
			{
				printf(", %i", a[i]);
			}
		printf("\n");
	}
}
