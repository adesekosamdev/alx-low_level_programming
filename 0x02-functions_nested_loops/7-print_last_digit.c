#include "main.h"

/*
 *the function below prints the last digit of a number
 * */

int print_last_digit(int n)
{
	int number;
	int last_digit;

	if (n < 0)
	{
		number = (-n);
	}
	else
	{
		number = n;
	}

	last_digit = (number % 10);

	_putchar('0' + last_digit);

	return (last_digit);
}
