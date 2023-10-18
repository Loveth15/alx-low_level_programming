#include "main.h"
#include <string.h>

/**
 * puts2 - This program prints a string from the first line
 * followed by a new line.
 * @str: string to be reversed
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int start = 0;
	int end = strlen(str) - 1;
	char temp;

	for (i = strlen(str) - 1; i >= 0; i++)
	{
		while (str[start] <= str[end])
		{
			temp = str[start];
			str[start] = str[end];
			str[end] = temp;

			start++;
			end--;

			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
