#include "main.h"

/**
 * flip_bits - Function that counts the number of bits to flip
 * @n: first number to get bit from
 * @m: second number to be flipped
 * Return: number of bits counted to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cur;
	unsigned long int bexc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = bexc >> i;
		if (cur & 1)
			count++;
	}

	return (count);
}
