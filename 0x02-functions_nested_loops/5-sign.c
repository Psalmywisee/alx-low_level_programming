#include "main.h"
/**
 *print_sign - prints positive, negative signs
 *@n: the oarameter of the function
 *Return: 1, 0 and -1 (if successful)
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
	_putchar(' ');
	return (-1);
	}
}
