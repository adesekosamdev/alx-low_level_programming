#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a sqaure matrix of integers
 * @a: array of sqaure to be printed
 * @size: size of the square
 * Return: nothing
 **/

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 = sum1 + *(a + (i * size + j));
				break;
			}
		}
		for (k = (size - 1); k >= 0; k--)
		{
			if ((k + i) == (size - 1))
			{
				sum2 = sum2 + *(a + (i * size + k));
				break;
			}
		}
	}
	printf("%i, %i\n", sum1, sum2);
}
