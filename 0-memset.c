#include "main.h"
/**
 * _memset - function that fills a memory with a constant byte
 * @mem1: first address of memory to be filled
 * @data: the value of byte to be used
 * @num: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *mem1, char data, unsigned int num)
{
	int i = 0;

	for (; num > 0; i++)
	{
		mem1[i] = data;
		num--;
	}
	return (mem1);
}
