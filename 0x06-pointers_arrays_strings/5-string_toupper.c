#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 **string_toupper - This function changes all lowercase letters
 * of a string to uppercase.
 * @str: string
 *
 * Return: A string
 */

char *string_toupper(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
