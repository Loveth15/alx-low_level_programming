#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: Initializes a
 * @b: initializes b
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
