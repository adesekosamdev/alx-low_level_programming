#include "main.h"

/**
  * leet - encodes a string into 1337
  * @n: string
  * Return: string encoded
 **/

char *leet(char *n)
{
	int i;
	int j;
	int length;
	char before1[] = "aeotl";
	char before2[] = "AEOTL";
	char after[] = "43071";

	length = 5;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < length; j++)
		{
			if ((n[i] == before1[j]) || (n[i] == before2[j]))
			{
				n[i] = after[j];
			}
		}
	}

	return(n);
}
