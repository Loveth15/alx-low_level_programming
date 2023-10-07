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
	int lst_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lst_n = n % 10;
	if (lst_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_n);
	}
	else if (lst_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_n);
	}
	return (0);
}
