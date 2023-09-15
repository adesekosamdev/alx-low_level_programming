#include "main.h"

/**
 * print_number - function to print integers
 * @n : integer value
 * Return: Always 0.
 */

void print_number(int n)
{
	int count, i, power, num, k;

	power = 1;
	count = 0;
	k = n;

	if (n < 0)
	{
		_putchar('-');
		k = k * -1;
	}
	num = k;

	while (num > 9)
	{
		count++;
		num = num / 10;
	}
	for (i = 0; i < count; i++)
	{
		power = power * 10;
	}
	while (power > 1)
	{
		_putchar((k / power) % 10 + '0');
		power = power / 10;
	}
	_putchar((k % 10) + '0');
}
