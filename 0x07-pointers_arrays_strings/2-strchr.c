#include "main.h"
/**
 * _strchr - Entry point of the main funtion
 * @s: input parameter as string
 * @c: input parameter as character
 * Return: 0 Always if successfull
 */
char *_strchr(char *s, char c)
{

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
