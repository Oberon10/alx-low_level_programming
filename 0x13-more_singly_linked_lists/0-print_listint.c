#include"lists.h"
/**
 * main - prints all the elements of a linked list
 * return: number of nodes
 */

size_t print_listint(const listint_t *v)
{
	size_t num = 0;

	while(v)
	{
	printf("%d\n", v->n);
	num++;
	v = v->next;
	}
	return (num);
}

