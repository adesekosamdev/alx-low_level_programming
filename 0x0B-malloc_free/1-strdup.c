#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int l;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
	{
	}

	s = malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
