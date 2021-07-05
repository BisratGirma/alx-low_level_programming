#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: the first variable
 * @b: the second variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
