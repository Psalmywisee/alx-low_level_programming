#include "main.h"
/**
 * _abs - Returns absolute value
 *  @a: parameter to be checked
 *  Return: a Always
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
