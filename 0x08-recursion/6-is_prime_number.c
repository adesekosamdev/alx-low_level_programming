#include "main.h"

/**
  * isprime - returns 1 if the input integer is a prime
  * @n1: base number
  * @n2: iteration
  * Return: boolean
  **/

int isprime(unsigned long n1, unsigned long n2)
{
	if (n1 > (n2 / 2))
	{
		return (1);
	}
	if ((n2 % n1) == 0)
	{
		return (0);
	}
	else
	{
		return (isprime((n1 + 1), n2));
	}
	return (0);
}

/**
  * is_prime_number - returns 1 if the input integer is a prime
  * @n: number
  * Return: boolean
  **/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (isprime(2, n));

}
