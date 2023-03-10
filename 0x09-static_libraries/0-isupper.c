#include "main.h"

/**
*_isupper - To check for upper case character
*@c: function parameter
*Return: 1 parameter is upper
*Return 0 if parameter is otherwise
*/

int _isupper(int c)
{
	int start = 65, end = 90;

	if (c >= start && c <= end)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
