#include "main.h"

/**
 * print_times_table - prints times table up to n
 *
 * Return: void
 *
 **/

void print_times_table(int n)
{
	int i, j, num;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			num = (i * j);
			_putchar(',');
			_putchar(' ');

			if (num < 10)
			{
				_putchar(' ');
				_putchar('0' + num);
			}
			else
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
		}
		_putchar('\n');
	}
}
