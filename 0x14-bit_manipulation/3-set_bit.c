#include "main.h"

/**
 * set_bit - sets a value of a bit to 1
 * @n: unsigned long int
 * @index: index of bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
