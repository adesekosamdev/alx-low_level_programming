#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to convert
 * Return: integer
 **/

int _atoi(char *s)
{
	int i, num, sign;

	num = 0;
	sign = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
			sign = -1;
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + sign * (s[i] - '0');
		if (num != 0 && !(s[i] >= '0' && s[i] <= '9'))
			return (num);
	}
	return (num);
}
