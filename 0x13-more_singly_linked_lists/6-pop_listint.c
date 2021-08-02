#include "lists.h"

/**
 * pop_listint - deletes the head.
 * @head: of a list.
 *
 * Return: the data of a head.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num = (*head)->n;

	if (head == NULL)
		return (0);
	*head = (*head)->next;
	free(temp);
	return (num);
}
