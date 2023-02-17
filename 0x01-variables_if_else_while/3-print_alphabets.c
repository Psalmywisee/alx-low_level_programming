#include <stdio.h>

/**
 * main - print both lower and upper case alphabeth.
 * Return 0 (if Successful)
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
