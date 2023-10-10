#include "main.h"

/**
 * print_alphabet  - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar (c);
		c = c + 1;
	}

	_putchar('\n');
}
