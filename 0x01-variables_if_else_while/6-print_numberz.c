#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that print all single digit of base 10 only using putchar.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
