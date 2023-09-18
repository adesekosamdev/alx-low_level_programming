#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: pointer to the first of the two integers
 * @b: pointer to the second of the two integers
 * Return: nothing
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
