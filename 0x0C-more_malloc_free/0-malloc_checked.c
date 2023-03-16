#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function to allocate memory using malloc
 * @b: size of bytes to allocate
 * Return: a pointer of the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)

	exit(98);
return (ptr);
}
