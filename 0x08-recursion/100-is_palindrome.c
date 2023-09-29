#include "main.h"

/**
  * _strlen_recursion - returns the length of a string.
  * @s: input char
  * Return: length
  *
  **/

int _strlen_recursion(char *s)
{
	int n;

	n = 1;

	if (*s == '\0')
		return (0);
	s++;
	return (n + _strlen_recursion(s));
}

/**
  * _rev_recursion - reverses a string
  * @i: index of element in revesered string
  * @s: string to be reversed
  * @my_rev: reversed form of the string
  * Return: nothing
  **/

void _rev_recursion(int i, char *s, char *my_rev)
{
	if (*s == '\0')
	{
		return;
	}
	my_rev[i] = *s;
	s++;
	_rev_recursion((i - 1), s, my_rev);
}

/**
  * _strcomp - compares two strings
  * @a: the first string
  * @b: the second string
  * Return: 1 if they are identical, 0 otherwise
  *
  **/

int _strcomp(char *a, char *b)
{
	if (*b == '\0')
		return (1);
	if (*a != *b)
		return (0);
	a++;
	b++;
	return (1 * (_strcomp(a, b)));
}

/**
  * _is_palindrome - checks if a string is a palindrome
  * @s: input char
  * Return: 1 if a palindrome, otherwise 0
  *
  **/

int is_palindrome(char *s)
{
	int l;
	char my_rev[1000];

	l = _strlen_recursion(s);
	_rev_recursion((l - 1), s, my_rev);
	return (_strcomp(my_rev, s));
}
