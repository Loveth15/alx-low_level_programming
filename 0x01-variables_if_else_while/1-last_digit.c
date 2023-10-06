#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_n = n % 10;
	if (last_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
	}
	else if (last_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, last_n);
	return (0);
	}
}
