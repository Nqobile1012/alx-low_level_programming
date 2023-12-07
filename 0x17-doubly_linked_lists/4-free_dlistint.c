#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 * @head: dll
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual = head;

	while (head)
	{
		actual = head;
		head = actual->next;
		free(actual);
	}
}
