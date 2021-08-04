#include "lists.h"

/**
 * pop_listint - deletes the head.
 * @head: of a list.
 *
 * Return: the data of a head.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head != NULL)
	{
		temp = *head;
		num = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (num);
	}
	else return (0);
}
