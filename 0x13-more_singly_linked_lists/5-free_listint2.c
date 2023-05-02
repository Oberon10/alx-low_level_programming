#include"lists.h"
/**
 * main - The function sets the head to NULL
 */

void free_listint2(listint_t**head)
{
	listint_t*temp;
	
	
	if (head ==NULL)
	return;
	while(*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head=NULL;
}
