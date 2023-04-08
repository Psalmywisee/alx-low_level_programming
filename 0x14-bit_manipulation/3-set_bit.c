#include "main.h"

/**
 * set_bit - Function that sets the value
 * of a bit to 1 at a given index
 * @n: pointer to integer to be set
 * @index: index of the bit to set to be 1
 * Return: 1 if it works, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

