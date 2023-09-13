#include "main.h"
#include <stdio.h>

/*
 * function main prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
 */

int main(void)
{
	long long int a = 1;
	long long int b = 2;
	long long int c;
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
