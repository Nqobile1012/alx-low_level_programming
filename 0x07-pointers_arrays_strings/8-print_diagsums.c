#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of diagonals
 * @a: pointer to an array
 * @size: size of the matrixx
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, k, l = 0;

	k = size - 1;
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				sum1 += a[l];
			if (j == k)
				sum2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sum1, sum2);
}
