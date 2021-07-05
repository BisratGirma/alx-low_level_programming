#include "holberton.h"

/**
 * reverse_array - reverses the content of a string.
 * @a: an array to be reversed
 * @n: the number of to be reversed.
 *
 * Return: a reversed array.
 */
void reverse_array(int *a, int n)
{
	int j, temp;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = temp;
	}
}
