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
	char *concat;

	int i, ai;

	if (s1 == NULL)

	s1 = "";

	if (s2 == NULL)

	s2 = "";

	i = 0;
	ai = 0;

	while (s1[i] != '\0')

	i++;

	while (s2[ai] != '\0')

	ai++;

	concat = malloc(sizeof(char) * (i + ai + 1));

	if (concat == NULL)

	return (NULL);

	i = 0;
	ai = 0;

	while (s1[i] != '\0')

	{
	concat[i] = s1[i];
	i++;
	}

	while (s2[ai] != '\0')

	{
	concat[i] = s2[ai];

	i++, ai++;
	}
	concat[i] = '\0';

	return (concat);

}
