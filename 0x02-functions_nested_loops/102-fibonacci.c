#include "main.h"
#include <stdio.h>

/*
 * function main prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c, i;

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
