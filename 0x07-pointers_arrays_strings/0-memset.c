#include "main.h"
/**
 * _memset - function that fills a block of memory with a byte
 * @s: pointer to memory to be filled
 * @b: the desired value of byte
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;
	return (s);
}
