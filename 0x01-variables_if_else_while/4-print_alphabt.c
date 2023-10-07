#include <stdio.h>

/**
 * main - this program prints alphabets in lower and upper case
 *
 * in lower case and upper case.
 *
 * Return: Always
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
