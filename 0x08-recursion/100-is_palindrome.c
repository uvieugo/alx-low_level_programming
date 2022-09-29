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

int compare(char *s, int n1, int n2);
/**
 * compare - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}


/**
 * is_palindrome - check if a string is a palindrom
 * @s: input string
 * Return: 1 if string is palindrome else return 0.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
