#include "lists.h"

/**
 * print_list - prints the elements of node.
 * @h: a linked list head
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodesiX;

	for (nodesiX = 0; h != NULL; nodesiX++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	}
	return (nodesiX);
}
