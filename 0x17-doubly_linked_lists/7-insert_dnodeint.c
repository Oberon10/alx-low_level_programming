#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a double pointer to the head of the DLL
 * @idx: index of the list where the new node should be added
 * @n: the content of the new node to be added
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *aux_h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	/*the list tranverse process*/
	aux_h = *h;
	while (idx > 1)
	{
		aux_h = aux_h->next;
		if (aux_h == NULL)
			return (NULL);
		idx--;
	}
	if (aux_h->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = aux_h;
	new_node->next = aux_h->next;
	aux_h->next->prev = new_node;
	aux_h->next = new_node;
	return (new_node);
}
