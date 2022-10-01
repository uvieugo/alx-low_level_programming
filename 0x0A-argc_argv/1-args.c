#include <stdio.h>
/**
 * main - prints the number or arguments
 * @argc: number of rguments
 * @argv: array that contains arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
