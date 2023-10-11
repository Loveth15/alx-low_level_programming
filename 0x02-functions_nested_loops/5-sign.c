#include "main.h"

/**
 * print_sign - this program prints the sign of a number.
 *
 * @n: initialized to check sign of numbers
 *
 * Return: 1 when n > 0, 0 when n == 0, - when n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar("+");
	}
	else if (n == 0)
	{
		return (0);
		_putchar("0");
	}
	else
	{
		return (-);
		_putchar("-");
	}
	_putchar("\n");
}
