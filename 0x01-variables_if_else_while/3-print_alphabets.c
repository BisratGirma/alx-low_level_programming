#include <stdio.h>

/**
 * main displays alphabet in lower and upper with for
 *
 * Return: Always 0.
 */
int main(void)
{
char lower;
char upper;
char newline;

newline = '\n';

for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);

putchar(newline);

return (0);
}

