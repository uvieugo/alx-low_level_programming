#include "main.h"

/**
 * more_numbers - function that prints numbers from  0
 * to 14 followed by a new line
 *
 * Return:  void
 */

void more_numbers(void)
{
	int counter, i;

	counter = 0;
	while (counter < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
		counter++;
	}
}
