#include "main.h"
/**
  * print_number - prints number with _putchar
  * @n: input number
  * Return: no return
 **/
void print_number(int n)
{
	int deg;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	deg = 1;

	temp = n;
	while (temp >= 10)
	{
		deg = deg * 10;
		temp = temp / 10;
	}

	while (deg >= 1)
	{
		_putchar(((n / deg) % 10) + '0');
		deg = deg / 10;
	}
}
