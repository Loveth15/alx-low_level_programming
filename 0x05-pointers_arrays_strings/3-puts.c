#include "main.h"
#include <string.h>

/**
 * _puts - A program that prints a string,
 * followed by a new line.
 * @str: string to be printed.
 * Return: Always success.
 */

void _puts(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		_puts(str[m]);
		m++;
	}

	_puts('\n');
}
