#include "main.h"
/**
  * rot13 - encodes a string into rot13
  * @n: string
  * Return: string encoded
 **/
char *rot13(char *n)
{
	int i;

	i = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] >= 'A' && n[i] <= 'Z') || (n[i] >= 'a' && n[i] <= 'z'))
		{
			if ((n[i] > 64 && n[i] < 78) ||(n[i] > 64 && n[i] < 110))
			{
					n[i] = n[i] + 13;
			}
			else
			{
				n[i] = n[i] - 13;
			}
		}
	}

	return (n);
}
