#include "main.h"
/**
* _sqrt_recursion - function for _sqrt_recursion
* @n: number to calculate the square root of
*
* Return: the resulting square root
*/

int _sqrt_recursion(int n)
{
	int s;
	int l;

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		s = _sqrt_recursion(n >> 2) << 1;
		l = s + 1;
			if (l * l > n)
			{
				return (s);
			}
			else if (l * l == n)
			{
				return(l);
			}
			else
			{
				return(-1);
			}
	}
}
