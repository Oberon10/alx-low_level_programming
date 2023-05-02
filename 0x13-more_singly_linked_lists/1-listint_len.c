#include "lists.h"
/**
 * main - function that returns the number of elements in a linked listint_t lists
 *return: number of node
 */
size_t listint_len(const listint_t *k)
{
	size_t num = 0;
	
	while (k)
	{
	num ++;
	k =k->next;
	}
	return (num);
}
