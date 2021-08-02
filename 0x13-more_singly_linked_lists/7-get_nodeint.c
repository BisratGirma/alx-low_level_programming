#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node.
 * @head: of a list.
 * @index: nth.
 *
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int inc;

	for (inc = 0; inc < index; inc++)
	{
		head = head->next;
	}
	return (head);
}
