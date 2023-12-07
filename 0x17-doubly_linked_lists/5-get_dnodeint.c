#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node
 * @head: dll
 * @index: nth node to access
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual = head;
	int nth = 0;

	while (nth++ != (int)index && actual)
		actual = actual->next;

	if (!actual)
		return (NULL);

	return (actual);
}
