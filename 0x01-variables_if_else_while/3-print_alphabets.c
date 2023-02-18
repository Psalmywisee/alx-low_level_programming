#include <stdio.h>

/**
 * main - A program that prints alphabtst in
 * lowercase, and then in uppercase
 * followed by a new line
 * Return: 0 (When successful)
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
