#include <stdio.h>
/**
 * main - displays all lowercase characters using putchar method
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
	putchar(lower);
}
putchar(newline);
return (0);
}
