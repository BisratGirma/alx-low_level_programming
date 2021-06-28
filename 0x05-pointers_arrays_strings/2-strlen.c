#include "holberton.h"

/**
 * _strlen - prints the number of character string has
 * @str: a string variable.
 * Return: Length of the variable string.
 */
int _strlen(char *s)
{
	int i = 0;
	
	while(*s++)
	       i++;
	return (i);
}	
