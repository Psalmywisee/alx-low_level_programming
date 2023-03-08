#include "main.h"
/**
 * _strlen_recursion - Function that shows the number of strings
 * @s: The string whose length is to be determined
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
