#include "main.h"
#include <string.h>

/**
 * rev_string - A program that reverses a string.
 * @s: string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;
	char temp;

	while (start > end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
