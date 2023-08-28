#include "main.h"

/**
 * _strpbrk - function that searches a string for any of the set of bytes
 * @s: string
 * @accept: 2nd string
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; *(s + 1) != '\0' ; i++)
	{
		for (j = 0 ; *(accept + j) != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + 1);
		}
	}
	return ('\0');
}
