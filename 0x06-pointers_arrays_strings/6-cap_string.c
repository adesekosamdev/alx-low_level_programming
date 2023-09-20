#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: new string
 **/

char *cap_string(char *s)
{
	int i;
	int j;
	char sep[] = {',',';','.','!','?','"','(',')','{','}','\t',' ','\n'};

	if (s[0] < 123 && s[0] > 96)
	{
		s[0] = (s[0] - 32);
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == sep[j] && s[i] < 123 && s[i] > 96)
			{
				s[i] = (s[i] - 32);
				break;
			}
		}
	}

	return (s);
}
