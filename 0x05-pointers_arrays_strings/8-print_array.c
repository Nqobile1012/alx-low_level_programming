#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: the input array
 * @n: input n elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
