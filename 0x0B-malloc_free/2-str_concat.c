#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get two stings input and return it
 * to a new allocated memory space
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concat of strings s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
int i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	str = (char *)  malloc(((i + j) + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	return (str);
}
