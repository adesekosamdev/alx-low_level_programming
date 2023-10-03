#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int l1;
	int l2;
	int i;
	int j;

	if (s1 == NULL && s2 != NULL)
	{
		l1 = 0;
		s1 = "";
		for (l2 = 0; s2[l2] != '\0'; l2++)
		{
		}
	}
	else if (s2 == NULL && s1 != NULL)
	{
		l2 = 0;
		s2 = "";
		for (l1 = 0; s1[l1] != '\0'; l1++)
		{
		}
	}
	else if (s1 == NULL && s2 == NULL)
	{
		l1 = l2 = 0;
		s1 = s2 = "";
	}
	else
	{
		for (l1 = 0; s1[l1] != '\0'; l1++)
		{
		}
		for (l2 = 0; s2[l2] != '\0'; l2++)
		{
		}
	}
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		s[j + l1] = s2[j];
	}
	s[l1 + l2] = '\0';

	return (s);
}
