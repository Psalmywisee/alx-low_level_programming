#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function to know if an integer n is
 * a prime or not
 * @n: number whose prime is to be calculated
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - iterative function to find the prime number
 * @n: number whose primes are sought
 * @i: iterative operator
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
