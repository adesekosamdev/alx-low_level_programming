#include "main.h"

/**
 * clear_bit - set the opposite of the hold
 * @num: number to set
 * @index: position
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int hold = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	hold <<= index;
	*num &= ~hold;

	return (1);
}
