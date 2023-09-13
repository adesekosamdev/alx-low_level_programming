#include "main.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
