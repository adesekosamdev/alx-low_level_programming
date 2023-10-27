#include "main.h"

/**
 * get_length - returns the number of bits in a number
 * @num: number to consider
 *
 * Return: length of number
 */

unsigned int get_length(unsigned long int num)
{
	unsigned int count;

	if (num == 0)
		return (1);
	for (count = 0; num != 0; count++)
		num >>= 1;

	return (count);
}
