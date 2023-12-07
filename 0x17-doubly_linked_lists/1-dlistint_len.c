#include "lists.h"

/**
 * dlistint_len - return length of linked list
 * @h: doubly linked list
 * Return: numb of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
		h = h->next, length++;

	return (length);
}
