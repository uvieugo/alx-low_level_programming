#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @char: string
 * Return: void
 */
void _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
