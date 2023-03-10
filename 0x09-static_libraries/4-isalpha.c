#include "main.h"

/**
*_isalpha - checks for alphabets
*@c: parameter checked
*Return: 0 (Always)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
