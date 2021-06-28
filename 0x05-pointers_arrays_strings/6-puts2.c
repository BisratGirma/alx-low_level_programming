#include "holberton.h"

/**
 * puts2 - prints every other char of a string
 * @str: string to be passed as argument
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
