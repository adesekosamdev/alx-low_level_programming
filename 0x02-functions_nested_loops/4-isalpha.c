#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 *
 * @c: character to be checked if alpha
 *
 * Return: 1 if letter, 0 otherwise
 **/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
