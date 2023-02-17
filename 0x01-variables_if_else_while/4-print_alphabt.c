#include <stdio.h>

/**
 * main - exclude letter q and e while printing
 * all other alphabethin lower case
 * Return: 0 (Sucess)
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
