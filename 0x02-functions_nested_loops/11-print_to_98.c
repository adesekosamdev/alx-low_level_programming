#include <stdio.h>
#include "main.h"

/*
 * The function prints all natural numbers from n to 98
 * */

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
