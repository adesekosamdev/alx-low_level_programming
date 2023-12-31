#include "main.h"

/**
 * binary_to_uint - converts a binary number to a decimal
 * @b: points to a string of 0's and 1's
 * Return: decimal format of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0; /* dec is the variable to hold the decimal format */

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
		b++;
	}

	return (num);
}
