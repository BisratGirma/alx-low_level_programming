#include "lists.h"

/**
 * free_dlistint -  frees a list
 * @head: pointer to head of the list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		;
	else if (head->next == NULL)
		free(head);
	else
	{
		while (temp != NULL)
		{
			temp = temp->next;
			free(head);
			head = temp;
		}
	}
}
