#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - This program copies memory area
 * @dest: This is the destination of memory area
 * @src: the source to copy from
 * @n: number of bytes to be copied
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
