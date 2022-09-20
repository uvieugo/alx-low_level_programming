#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer a
 * @b: integer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
