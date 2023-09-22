#include "main.h"
/**
  * infinite_add - adds two numbers
  * @n1: number1
  * @n2: number2
  * @r: result
  * @size_r: size result
  * Return: r addition
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int num1;
	int num2;
	int sum;
	int n;
	int rev;
	int rem;

	i = 0;
	j = 0;
	rem = 0;

	while (n1[i] != '\0')
	{
		i++;
	}

	while (n2[j] != '\0')
	{
		j++;
	}

	for (n = 0; n < j || n < i; n++)
	{
		if ((i - n) > 0)
		{
			num1 = (n1[i - n - 1] - '0');
		}
		else
		{
			num1 = 0;
		}
		if ((j - n) > 0)
		{
			num2 = (n2[j - n - 1] - '0');
		}
		else
		{
			num2 = 0;
		}
		sum = num1 + num2 + rem;
		r[n] = (sum % 10) + '0';
		if (sum > 9)
		{
			rem = 1;
		}
		else
		{
			rem = 0;
		}
	}
	if (rem == 1)
	{
		r[n] = '1';
		r[n + 1] = '\0'; 
	}
	else
	{
		r[n] = '\0';
		n--;
	}
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < (n - i); j++)
		{
			rev = r[j + 1];
			r[j + 1] = r[j];
			r[j] = rev;
		}
	}
	if (n < (size_r - 1))
	{
		return(r);
	}
	else
	{
		return(0);
	}
}
