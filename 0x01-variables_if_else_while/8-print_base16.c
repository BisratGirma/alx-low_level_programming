#include <stdio.h>

/**
 * main - display all base 16 numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
char lower;
int n;
/* displaying number */
for (n = 0; n < 10; n++)
	putchar((n % 10) + '0');
/* displaying letters */
for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
putchar('\n');
return (0);
}
