#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - function
* @a: The first number.
* @b: The second number.
*
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - functions
* @a: n1
* @b: n2
*
* Return: diff
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Returns the product of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function
* @a: num1
* @b: num2
*
* Return: div
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - function
* @a: num1
* @b: num1
*
* Return: modulus
*/
int op_mod(int a, int b)
{
	return (a % b);
}
