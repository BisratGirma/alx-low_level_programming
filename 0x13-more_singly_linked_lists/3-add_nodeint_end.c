#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of lists.
 * @head: head of the list.
 * @n: value to be assigned.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (last->next);
}
