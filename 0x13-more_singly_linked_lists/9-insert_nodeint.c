#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at nth place.
 * @head: start of the list.
 * @idx: index of the new node place to be added.
 * @n: the data of the new node.
 *
 * Return: the address of the new node, if not NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	new->n = n;

	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	new->next = temp->next;
	temp->next = new;
	if (!new)
		return (NULL);
	return (new);
}
