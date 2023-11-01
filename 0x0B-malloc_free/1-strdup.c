#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space
 * @str: String as parameter
 * Return: Pointer to duplicate string if success, and NULL if failure
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[i] = str[i]) != '\0')
	{
		i++;
	}

	return (dup);
}