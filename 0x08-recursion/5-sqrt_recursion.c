#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function to calculate the square root of a number
 * @n: inputed number to calculate its  square root
 * Return: square root always
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - iterative function to find square root of a number
 * @n: number to calculate its sqaure root
 * @i: iterative operator
 * Return: the result square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
