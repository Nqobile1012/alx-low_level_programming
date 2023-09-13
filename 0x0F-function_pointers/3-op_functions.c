#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the module of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
