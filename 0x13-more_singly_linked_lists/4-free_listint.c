#include "lists.h"

/**
 * free_listint - frees the memory of lists.
 * @head: head of a list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}	
