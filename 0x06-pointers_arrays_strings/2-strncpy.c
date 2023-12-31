#include "main.h"
#include <string.h>

/**
 * *_strncpy - This function copies a string
 * @dest: string one
 * @src: string to be copied into dest
 * @n: byte
 * Return: string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; n > i; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
