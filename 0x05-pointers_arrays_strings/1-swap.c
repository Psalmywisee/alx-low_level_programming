#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: integer parameter to swap
* @b: integer parameter to swap
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
