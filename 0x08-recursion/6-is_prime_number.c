#include "main.h"

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

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (isprime (2, n));

}
