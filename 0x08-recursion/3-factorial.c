#include "main.h"

/**
 * factorial - demonstrates the function of a factorial
 * @n: number whose factorial is to be returned
 * Return:  n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
