#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int counter = 0;

	while (counter < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		counter++;
	}
}

