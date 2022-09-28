#include "main.h"

/**
 * _strlen_recursion - function that returns lenght of string
 * @s: input string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = 1;
		count = count + _strlen_recursion(s + 1);
	}

	return (count);
}
