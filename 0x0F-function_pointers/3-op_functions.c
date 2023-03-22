#include "3-calc.h"
	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
/**
* op_add -  Function to the sum two numbers
* @a: First number
* @b: Second number
* Return: The sum of a and b
*/
	int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - Subtracts two numbers
* @a: First number
* @b: Second number
* Return: The difference of a and b
*/
	int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Performs the product of two numbers
* @a: First number
* @b: Second number
* Return: The product of a and b
*/
	int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Function for the division of two numbers
* @a: First number
* @b: Second number
* Return: The quotient of a and b
*/
	int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - Returns the modulus of two numbers
* @a: First number
*@b:  Second number
* Return: The remainder of the division of a by b
*/
	int op_mod(int a, int b)
	{
	return (a % b);
	}
