#include <stdio.h>
#include <time.h>
/**
 * Checks if a number is positive or negeative.
 * Return: 0 (if successsful)
 */
int main()
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("%d is positive\n", n);
}
else if (n==0)
{
printf("%d is zero\n", n)
}
else
{
printf("%d is negative\n", n);
}return (0);
}
