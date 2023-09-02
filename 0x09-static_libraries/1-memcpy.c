#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: source mem area
 * @dest: destination mem area
 * @n: bytes that are filled
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
