#include "main.h"

/**
 * is_prime - check if a number is a prime number
 * @n: input
 * @counter: counter
 * Return: 1 if n is prime number else return 0.
 */

int is_prime(int n, int counter);

int is_prime(int n, int counter)
{
	if (n % counter == 0)
	{
		if (n == counter)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (is_prime(n, counter + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n:input integer
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
