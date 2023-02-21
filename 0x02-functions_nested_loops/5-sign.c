#include "main.h"

/**
 * print_sign - prints signs positive, negative and zero signs
 * @n: function parameter to handle argument
 * Return: 1, 0 and -1 (As success)
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ';
		return (-1);
	}
}

