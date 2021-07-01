#include "holberton.h"
/**
 * leet - change a string to 1337 style
 * @str: a string variable
 *
 * Return: a leet style string
 */
char *leet(char *str)
{
	int i;
	char mappings[26 * 2];

	for (i = 0; i < 26 * 2; i++)
	{
		mappings[i] = 0;

		mappings['a' - 'a'] = mappings['A' - 'A' + 26] = '4';
		mappings['e' - 'a'] = mappings['E' - 'A' + 26] = '3';
		mappings['o' - 'a'] = mappings['O' - 'A' + 26] = '0';
		mappings['t' - 'a'] = mappings['T' - 'A' + 26] = '7';
		mappings['l' - 'a'] = mappings['L' - 'A' + 26] = '1';
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		int is_lower = *(str + i) >= 'a' && *(str + i) <= 'z';
		int is_upper = *(str + i) >= 'A' && *(str + i) <= 'Z';
		int key = *(str + i) - (is_lower * 'a') - (is_upper * ('A' - 26));

		if ((is_lower || is_upper) && mappings[key] != 0)
			*(str + i) = mappings[key];
	}
	return (str);
}
