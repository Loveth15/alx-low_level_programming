#include "main.h"
#include <string.h>

/**
 * *_strncat - This function concatinates two strings
 * using at most n bytes from src
 * @dest: string one
 * @src: string to be appended with n byte used
 * @n: byte used
 * Return: pointer to the string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
