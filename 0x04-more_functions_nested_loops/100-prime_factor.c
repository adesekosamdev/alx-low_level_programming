#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: always 0
 **/

int main(void)
{
	long i, j;
	long n;
	int p;

	n = 612852475143;
	for (i = (n / 2); i >= 2; i--)
	{
		if (n / i)
		{
			for (j = 2; j <= (i / 2); j++)
			{
				if (i / j)
				{
					p = 0;
					break;
				}
				else
				{
					p = 1;
				}
			}
			if (p == 1)
			{
				printf("%li\n", i);
				break;
			}
		}
	}
	return (0);
}
