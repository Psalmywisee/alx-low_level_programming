#include "main.h"
/**
 * _islower - prints lower case alphabets from a to z
 * @c: parameter to be printed
 *
 * Return: 1 if lower case and zero if not lower case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
