#include <stdlib.h>

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
 * *argstostr - concatenates all the arguments of a program.
 * @ac: number of arguments
 * @av: array of string arguments
 * Return: pointer to the new string, or NULL if it fails
 **/

char *argstostr(int ac, char **av)
{
	char *s;
	int ls;
	int i;
	int j;
	int p;

	ls = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		ls = ls + (_strlen_recursion(av[i]));
	}
	ls = ls + 1 + i;
	s = malloc(sizeof(char) * (ls));
	if (s == NULL)
		return (NULL);
	i = 0;
	p = 0;
	while (p < ls && i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[p] = av[i][j];
			p++;
		}
		s[p] = '\n';
		p++;
		i++;
	}
	s[ls] = '\0';
	return (s);
}
