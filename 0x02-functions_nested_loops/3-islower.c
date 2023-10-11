#include "main.h"

/**
 * _islower - this program checks for lowercase letters
 *
 * @c: c represents lowercase alphabets.
 *
 * Return: 1 when c is lowercase and 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
