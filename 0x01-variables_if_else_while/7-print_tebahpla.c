#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will print alphabets in lowercase
 *
 * in reverse followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);

	putchar('\n');

	return (0);
}
