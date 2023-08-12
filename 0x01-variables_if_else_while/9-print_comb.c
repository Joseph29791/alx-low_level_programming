#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - program that print combinations of single-digit numbers.
 *
 *  Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
			putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
