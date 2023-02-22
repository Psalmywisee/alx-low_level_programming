#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints signs positive, negative and zero signs
 * @n: function parameter to handle argument
 * Return: 1, 0 and -1 (As success)
 */

int print_sign(int n)

{
	if (n > 0)
	{
	printf("+, ");
	return (1);
	}
	else if (n == 0)
	{
	printf("0, ");
	return (0);
	}
	else
	{
	printf("-, ");
	return (-1);
	}
}

