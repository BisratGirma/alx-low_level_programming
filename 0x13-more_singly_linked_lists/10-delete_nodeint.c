#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at nth stage.
 * @head: head pointer of the list.
 * @index: the indexing integer.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp = *head;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{	*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		temp = temp->next;

	del = temp->next;
	temp->next = del->next;
	free(del);
	return (1);
}
