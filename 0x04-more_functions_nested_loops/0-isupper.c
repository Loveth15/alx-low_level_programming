#include "main.h"

/**
 * _isupper - This program checks for uppercase characters
 * @c: Value to return
 * Return: Always 0 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
