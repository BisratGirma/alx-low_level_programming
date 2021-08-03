#include "lists.h"

/**
 * print_listint - prints the elements of listint.
 * @h: head of linked list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
