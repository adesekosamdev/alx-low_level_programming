#include "main.h"

/**
 * print_sign - determin sign of int
 *
 * @n: number to check for sign
 *
 * Return: 1 if positive, 0 if 0, and -1 if negative
 **/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
