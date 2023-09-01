#include <stdio.h>

/**
 * main - prints its name, then a new line
 * @argc: number of command line arguments
 * @argv: array that has the program command line arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
