#include "main.h"
/**
  * rot13 - encodes a string into rot13
  * @n: string
  * Return: string encoded
 **/
char *rot13(char *n)
{
	int i;
	int j;
	int alph_length;
	char before[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char after[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	alph_length = 52;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < alph_length; j++)
		{
			if (n[i] == before[j])
			{
				n[i] = after[j];
				break;
			}
		}
	}

	return (n);
}
