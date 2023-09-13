#include "main.h"
#include <stdio.h>

/**
 * main - print the sum of the even-valued terms
 * whose values do not exceed 4,000,000
 * in the fibonacci sequence
 * Return: Nothing.
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	long sum = 2;

	do
	{
		c = a + b;
		if ((c % 2) == 0)
		{
			sum = (sum + c);
		}
		else
		{
			;
		}
		a = b;
		b = c;
	}
	while (c < 4000000);

	printf("%li\n", sum);
	return (0);
}
