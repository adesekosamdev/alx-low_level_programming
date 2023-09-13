#include "main.h"
#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int i;

	printf("%li, %li", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %li", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
