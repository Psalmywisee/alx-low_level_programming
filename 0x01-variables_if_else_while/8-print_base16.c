#include <stdio.h>

/**
 * main - a program that prints all the numbers of
   base 16 in lowercase, followed by a new line
 * Return: 0 (If successful)
 */
int main(void)
{
	int n;
	char num;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
