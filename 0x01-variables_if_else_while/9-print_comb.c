#include <stdio.h>

/**
 * main - display single digit 
 *
 * Return: Always 0.
 */
int main(void)
{
for (int n = 0; n < 10; n++)
{
	putchar((n % 10) + '0');
	if (n == 9)
		continue;

	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
