#include "main.h"

/**
 * get_bit - returns value of a bit
 * @n: unsigned long int input
 * @index: index of bit
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned long int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0 ; i <= 63 ; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
