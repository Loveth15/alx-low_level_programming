#include "main.h"

/**
 * print_most_numbers - This function prints numbers from 0 - 9
 * followed by a new line
 * Description: prints numbers
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');

		i++;
	}

	_putchar('\n');
}
