#include "main.h"
/**
  * print_number - prints number with _putchar
  * @n: input number
  * Return: no return
 **/
void print_number(int n)
{
	unsigned int temp;

	temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = n * -1;
	}

	if (n / 10 != 0)
	{
		print_number(temp / 10);
	}

	_putchar((temp % 10) + '0');
}
