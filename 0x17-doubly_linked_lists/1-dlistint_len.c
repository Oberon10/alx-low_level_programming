#include "lists.h"

/**
 * dlistint_len - displays the number of elements in DLL
 * @h: a pointer to the head of the DLL
 * Return: the num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t k;

	for (k = 0; h != NULL; k++)
		h = h->next;
	return (k);
}

