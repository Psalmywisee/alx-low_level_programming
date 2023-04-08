#include "main.h"

/**
 * get_endianness - U=Function that checks for endiannes
 * Return: 0 if big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
