#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - main entry point
 * @a: one input
 * @size: two input
 * Return: 0 always
 */

void print_diagsums(int *a, int size)
{
	int sqr1, sqr2, x;

	sqr1 = 0; //first square sum
	sqr2 = 0; //second square sum

	for (x = 0; x < size; x++)
	{
		sqr1 = sqr1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sqr2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sqr1, sqr2);
return (0);
}
