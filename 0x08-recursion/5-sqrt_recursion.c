#include "main.h"

int find_square(int n, int counter);

/**
 * find_square - returns the natural square root of a number.
 * @n: input number.
 * @counter: counter.
 * Return: square root or -1.
 */
int find_square(int n, int counter)
{
	if (counter % (n / counter) == 0)
	{
		if (counter * (n / counter) == n)
			return (counter);
		else
			return (-1);
	}
	return (0 + find_square(n, counter + 1));
}

/**
 * _sqrt_recursion - function that returns the natural sqaure root of a number
 * @n:input integer
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (find_square(n, 2));
	}
}
