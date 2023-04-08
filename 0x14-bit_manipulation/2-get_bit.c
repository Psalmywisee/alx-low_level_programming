#include "main.h"

/**
 * get_bit - Function to return the value of 
 * a bit at a given index
 * @n: number to go through the index
 * @index: index number of the bit
 * Return: value of the bit at index or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binary;

	if (index > 63)
		return (-1);

	binary = (n >> index) & 1;

	return (binary);
}
