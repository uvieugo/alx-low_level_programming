#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds two positive numbers
 * @argc: number of arguments
 * @argv: array that contains arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] == '\0')
				return (0);
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (0);
			}
			/**printf("%s\n", argv[i]);*/
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
