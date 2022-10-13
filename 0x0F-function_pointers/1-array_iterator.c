#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: input array.
 * @size: size of the array
 * @action: pointer to function.
 *
 * Return: no return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
