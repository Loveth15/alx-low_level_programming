#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 - 9
 * and moves to a new line
 * Return: Nothings
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
