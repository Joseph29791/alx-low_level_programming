#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that print the lowcase alphabet in reverse.
 *
 * Return: Alway 0
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
