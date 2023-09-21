#include "main.h"
/**
  * print_number - prints number with _putchar
  * @n: input number
  * Return: no return
 **/
void print_number(int n)
{
	int deg;

	deg = 1;

	while (n > 0)
	{
		deg = deg * 10;
		n = n / 10;
	}

	while (deg > 1)
	{
		_putchar((n / deg) % 10);
		deg = deg / 10;
	}


}
