#include "lists.h"

/**
 * free_listint2 - frees the memory of lists.
 * @head: head of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (head == NULL)
		exit(3);

	node = *head;
	if (node != NULL)
	{
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp);
		}
		*head = NULL;
	}
}
