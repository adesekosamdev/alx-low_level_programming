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
  * wildcmp - compares two strings
  * @s1: the first string
  * @s2: the second string
  * Return: 1 if they are identical, 0 otherwise
  *
  **/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (1);
	if (*s1 != *s2)
		return (0);
	s1++;
	s2++;
	return (1 * (wildcmp(s1, s2)));
}
