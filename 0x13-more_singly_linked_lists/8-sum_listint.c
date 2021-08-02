#include "lists.h"

/**
 * sum_listint - sums up all nodes number.
 * @head: head of a list.
 *
 * Return: sum of all nodes integer.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
