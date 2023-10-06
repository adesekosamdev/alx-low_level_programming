#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

char **strtow(char *str)
{
	int i;
	int j;
	int k;
	int word_count;
	int word_index;
	char **strarr;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = 0; (str[j + i] != ' ' && str[j + i] != '\0'); j++)
			{
			}
			word_count++;
			i = i + j;
		}
	}
	strarr = malloc(sizeof(char *) * (word_count + 1));
	if (strarr == NULL)
		return (NULL);
	word_index = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 0; (str[j + i] != ' ' && str[j + i] != '\0'); j++)
			{
			}
			strarr[word_index] = malloc(sizeof(char) * (j + 1));
			if (strarr[word_index] == NULL)
			{
				for (k = 0; k < word_index; k++)
				{
					free(strarr[k]);
					free(strarr);
					return (NULL);
				}
			}

			for (k = 0; k < j; k++)
			{
				strarr[word_index][k] = str[i + k];
			}
			strarr[word_index][j] = '\0';
			word_index++;
			i = i + (j - 1);
		}
	}
	strarr[word_index] = NULL;
	return (strarr);
}
