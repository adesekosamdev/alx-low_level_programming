#include "main.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	double a = 1;
	double b = 2;
	double c;
	int i;

	printf("%i, %i", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %i", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
