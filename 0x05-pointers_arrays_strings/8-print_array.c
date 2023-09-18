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

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%i", a[i]);
		}
		else
			printf(", %i", a[i]);
	}
	printf("\n");
}
