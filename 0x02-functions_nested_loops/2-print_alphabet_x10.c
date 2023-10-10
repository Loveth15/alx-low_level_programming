#include "main.h"

/**
 * print_alphabet_x10  - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char j;

	for (j = 0; j < 10; j++)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
