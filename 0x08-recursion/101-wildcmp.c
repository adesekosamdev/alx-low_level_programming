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
	int l1;
	int l2;
	char end1;
	char end2;

	l1 = _strlen_recursion(s1);
	l2 = _strlen_recursion(s2);
	if (l1 > 0)
	{
		end1 = *(s1 + l1 - 1);
	}
	if (l1 > 0)
	{
		end2 = *(s2 + l2 - 1);
	}

	if (l1 != l2 && end1 != end2 && end2 != '*')
		return (0);
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
