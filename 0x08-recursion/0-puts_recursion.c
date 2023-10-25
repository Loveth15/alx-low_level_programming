#include "main.h"
#include <string.h>

/**
 * _puts_recursion - This program prints a string
 * followed by a new line
 * @s: string to be printed
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
