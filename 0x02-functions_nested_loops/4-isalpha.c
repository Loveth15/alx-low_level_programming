#include "main.h"

/**
 *  _isalpha - This program checks for alphabetic character
 *
 * @c : checks using ASCII values
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
