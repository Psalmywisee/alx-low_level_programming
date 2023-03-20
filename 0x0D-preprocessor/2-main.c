#include <stdio.h>
/**
 * main - Prints the file the program was compiled from
 * Return: 0 always
 */
int main(void)
{
printf("File the program was compiled from is %s\n", __FILE__);
return (0);
}
