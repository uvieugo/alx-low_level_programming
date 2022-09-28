#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n:input integer
 * Return: factorial of n, -1 if n is lower than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
