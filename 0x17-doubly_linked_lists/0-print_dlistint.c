#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint
 * @h: doubly linked list
 * Return: numb of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
