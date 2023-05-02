#include "lists.h"
/**
*main - Write a function that returns the sum of all the data (n) of a listint_t linked list
* return - if the list is empty, return 0
*/
int sum_listint(listint_t*head)
{
	int sum = 0;
	listint_t*temp =head;


	while(temp)
	{	
	sum +=temp->n;
	temp = temp->next;
	}
	
	return(sum);
}
