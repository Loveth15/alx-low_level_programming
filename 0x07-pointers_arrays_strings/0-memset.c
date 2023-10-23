#include <stdio.h>
#include <string.h>

/**
 * _memset - This function fills memory
 * with a constant byte
 * @n: unsigned int to be used
 * @b: value to be set
 * @s: points to memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
