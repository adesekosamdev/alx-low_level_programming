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

char **strtow(char *str)
{
	int i;
	int j;
	/*int ls;*/
	/*int lstr;*/
	/*int numofs;*/
	int wcount;
	char **strarr;

	if (str == NULL || _strlen_recursion(str) == 0)
		return (NULL);

	/*ls = 0;*/
	/*numofs = 0;*/
	/*lstr = _strlen_recursion(str);*/
	wcount = 0;
	/* check for total number of character that are not ' '(spaces) */
	/*for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			ls++;
		if (str[i] != ' ' && str[i + 1] == ' ' && (i != (lstr - 1) || )) */
	/*}*/
	/* check for number of words */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; (str[j] != ' ' && str[j] != '\0'); j++)
			{
			}
			wcount++;
			i = j;
		}
	}
	/*ls = ls + wcount;*/
	strarr = malloc(sizeof(char *) * wcount);
	wcount = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; (str[j] != ' ' && str[j] != '\0'); j++)
			{
			}
			strarr[wcount] = malloc(sizeof(char) * ((j - i) + 1));
			wcount++;
			i = j;
		}
	}
	/* rem to handle fail */
	/*i = 0;
	p = 0;
	while (p < ls && str[i] != '\0')*/
	wcount = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = 0; (str[j + i] != ' ' && str[j] != '\0'); j++)
			{
				strarr[wcount][j] = str[j + i];
			}
			strarr[wcount][j] = '\0';
			wcount++;
		}
	}
	return (strarr);
}
