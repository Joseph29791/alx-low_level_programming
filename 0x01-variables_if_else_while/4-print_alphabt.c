#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - program that print all lower alphabet except q ane e.
 *
 *  Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
