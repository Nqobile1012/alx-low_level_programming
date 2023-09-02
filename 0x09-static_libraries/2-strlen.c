#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
