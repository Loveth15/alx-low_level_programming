#include "main.h"
#include <string.h>

/**
 * *_strcat - This program concatinates two strings, char *dest and char *src
 * and returns a pointer to the terminating string dest
 * @dest: string one
 * @src: string to be appended to *dest
 * Return: Pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	char *output = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (output);
}
