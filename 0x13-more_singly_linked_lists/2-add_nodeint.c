#include "lists.h"

/**
 * add_nodeint - add a new first list on linked list.
 * @head: of a linked list.
 * @n: integer value
 *
 * Return: the address of the new element, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	if (head == NULL)
	{
		return (NULL);
	}
	return (*head);
}
