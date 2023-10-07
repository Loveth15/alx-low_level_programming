#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lower and upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char e;

	c = 'a';
	e = 'A';
	while (c <= 'z' && e <= 'Z')
	{
		putchar (c);
		c = c + 1;
	}

	while (e <= 'Z')
	{
		putchar(e);
		e = e + 1;
	}

	putchar('\n');

	return (0);
}
