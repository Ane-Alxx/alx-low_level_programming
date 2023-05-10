#include "main.h"

/**
* factorial - fact fact
* @n: number to return the factorial from
*
* Return: factorial of n
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
