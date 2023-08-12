#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that print alphabet in lowercase.
 *
 * Return: Always 0
  */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
