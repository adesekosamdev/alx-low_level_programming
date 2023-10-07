#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of second string to add to first string
 * Return: pointer to the new string or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i;
	unsigned int j;
	unsigned int ls1;
	unsigned int l_new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ls1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		ls1++;
	}

	l_new_str = ls1 + n + 1;
	new_str = malloc(sizeof(char) * l_new_str);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	j = i;
	for (i = 0; (i < n && s2[i] != 0); i++)
	{
		new_str[j] = s2[i];
		j++;
	}
	new_str[j] = '\0';

	return (new_str);

}
