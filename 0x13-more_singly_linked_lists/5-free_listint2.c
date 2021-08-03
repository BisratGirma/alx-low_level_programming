#include "lists.h"

/**
 * free_listint2 - frees the memory of lists.
 * @head: head of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *fr;

	fr = (*head)->next;
	while (fr)
	{
		temp = fr;
		fr = fr->next;
		free(temp);
	}
	*head = NULL;
}
