#include "lists.h"
/**
 * dlistint_len - count the number of elements in dlistint.
 * @h: header var.
 *
 * Return: the number of element in dlistint_t.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
