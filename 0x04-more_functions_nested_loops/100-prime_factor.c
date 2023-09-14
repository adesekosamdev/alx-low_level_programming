#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: always 0
 **/

int main(void)
{
	long int i, j, l;
	long int n;
	int p;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		if ((n % 3) == 0)
		{
			for (j = 2; j < i; j++)
			{
				if ((i % j) == 0)
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
				l = i;
		}
	}
	printf("%li\n", l);
	return (0);
}
