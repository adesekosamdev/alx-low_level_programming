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
	unsigned long c, d, e, f, move;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 90; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	d = a % 1000;
	a = a / 1000;
	e = b % 1000;
	b = b / 1000;
	
	while (i <= 98)
	{
		move = (d + e) / 1000;
		f = (d + e) - move * 1000;
		c = (a + b) + move;
		a = b;
		b = c;
		d = e;
		e = f;

		if (f >= 100)
			printf(", %lu%lu", c, f);
		else
			printf(", %lu0%lu", c, f);
		i++;
	}

	printf("\n");
	return (0);
}
