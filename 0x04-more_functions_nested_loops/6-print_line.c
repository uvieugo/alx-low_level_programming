#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of characters
 * Return:  char
 */

int print_line(int n)
{
	int i

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
