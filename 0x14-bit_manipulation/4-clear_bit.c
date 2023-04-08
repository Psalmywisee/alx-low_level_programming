#include "main.h"

/**
 * clear_bit - Function to set the value of a
 * given bit at an index to 0
 * @n: pointer to the bit number to be set
 * @index: index of the bit to be made 0
 * Return: 1 if ir works, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
