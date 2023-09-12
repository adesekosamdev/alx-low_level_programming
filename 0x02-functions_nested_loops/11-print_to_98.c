#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from input to 98
 * @n: starting point
 *
 * Return: void returns nothing.
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("98\n");
	}
	else if (n < 98)
	{
		printf("%i", n);
		for (i = (n + 1); i <= 98; i++)
		{
			printf(", %i", i);
		}
		printf("\n");
	}
	else
	{
		printf("%i", n);
		for (i = (n - 1); i >= 98; i--)
		{
			printf(", %i", i);
		}
		printf("\n");
	}
}
