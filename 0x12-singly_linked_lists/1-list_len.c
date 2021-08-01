#include "lists.h"

/**
 * list_len - count the number of elements in linked list.
 * @h: linked list.
 *
 * Return: the number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
	size_t elementN = 0;

	while (h)
	{
		h = h->next;
		elementN++;
	}
	return (elementN);
}
