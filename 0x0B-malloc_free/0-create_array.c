#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: init char
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *chararray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	chararray = malloc(sizeof(c) * size);

	if (chararray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		chararray[i] = c;
	}

	return (chararray);
}
