#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - This program capitalizes all words of a string
 * @str: string
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int length = strlen(str);
	int capNextChar = 1;
	int i;

	for (i = 0; i < length; i++)
	{
		if (str[i] == ';' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capNextChar = 1;
		}
		else if (capNextChar && islower(str[i]))
		{
			str[i] = toupper(str[i]);
			capNextChar = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
			capNextChar = 0;
		}
	}

	return (str);
}
