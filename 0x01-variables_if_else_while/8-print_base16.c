#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints base 16 numbers in lowercase
 *
 * followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	char c;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);

}
