#include "main.h"

/**
 * binary_to_uint - Function to convert a binary number to unsigned int
 * @b: Points to a string of 0 and 1
 * Return: the converted number or 0 if there is one or more
 * chars in the string pointed to be b that is not 0 or 1 and b if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int basevalu = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		basevalu = 2 * basevalu + (b[i] - '0');
	}

	return (basevalu);
}
