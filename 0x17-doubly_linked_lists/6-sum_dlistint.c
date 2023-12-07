#include "lists.h"

/**
 * sum_dlistint - sum of all nodes
 * @head: dll
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int acumm = 0;

	if (!head)
		return (0);

	while (head)
	{
		acumm += head->n;
		head = head->next;
	}

	return (acumm);
}
