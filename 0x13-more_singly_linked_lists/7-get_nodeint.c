#include "lists.h"
/**
* main - Write a function that returns the nth node of a listint_t linked list.
* return: if the node does not exist, return NULL
*/
listint_t*get_nodeint_at_index(listint_t*head, unsigned int index)
{
	unsigned int d = 0;
	listint_t*temp = head;

	while (temp && d<index)
	{
	temp = temp->next;
	d++;
	}
	return (temp ?temp: NULL);
}
