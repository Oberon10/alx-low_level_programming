#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: struct
 * @n: const int
 * Return: dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
