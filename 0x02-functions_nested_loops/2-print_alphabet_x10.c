#include "main.h"

/**
 *print_alphabet_x10 - print x10 lowercase alphabet.
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0 ; i <= 9 ; i++)
	{
	for (k = 'a'; k <= 'z' ; k++)
		_putchar(k);
	_putchar('\n');
	}
}
