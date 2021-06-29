#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random 12 character password
 *
 * return: generated password.
 */
int main()
{
	srand((char)(time(NULL)));
	int i;
	char p[12];

	for (i = 0; i < 12; i++)
	{
		char pchar = ' ' + (rand() % 94);
		p[i] = pchar;
	}

	return (p);
}
