#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lower case
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c;

	c = 'a';
	while (c <= 'z')

	{
		putchar (c);
		c = c + 1;
	}

	putchar('\n');

	return (0);
}
