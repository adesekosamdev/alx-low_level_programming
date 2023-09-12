#include "main.h"

/**
 * print_times_table - print times table up to input
 *
 * Description: Writes times table up to imput not exceeding 15
 *
 * @n: size of times table
 *
 * Return: Nothing
 */

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
