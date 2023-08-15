#include "main.h"

/**
 * _isalpha - function that checks lowercase and uppercase characters
 * @c: parameter function
 * Return: must be 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
