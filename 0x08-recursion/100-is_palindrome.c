#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - iterates to check if a string is a palindrome
 * @s: string to be reversed
 * Return: 1 if it is palindrome, 0 it is not a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function to return the length of a string
 * @s: string to calculate its length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - individually checks the characters recursively
 * @s: string to be checked
 * @i: iterative operator
 * @len: length of the string
 * Return: 1 if string is a palindrome, 0 if it is not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
