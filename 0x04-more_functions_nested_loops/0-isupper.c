#include "holberton.h"

/**
 * _issupper -check if a character is capital
 * @c: a character to be tested
 * Return: 1 if uppercase, and 0 if not
 * /
int _issupper(int c)
{
	if (65<=c<=90)
		return (1);
	else
		return (0);
}
