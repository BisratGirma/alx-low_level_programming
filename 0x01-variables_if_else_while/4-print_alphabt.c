#include <stdio.h>

/**
 * main displays lowers without a and e 
 *
 * Return: Always 0.
 */
int main(void)
{
char lower;
char newline;

newline = '\n';

for (lower = 'a'; lower <= 'z'; lower++)
{
	if (lower == 'q' || lower == 'e')
		continue;
	putchar(lower);
}
putchar(newline);

return (0);
}
