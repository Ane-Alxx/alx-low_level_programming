#include "main.h"

/**
 * printing signs
 * Author: Ane-Alx
 * Return: 1 if positive, 0 if equal to 0, -1 otherwise
 */
 
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
