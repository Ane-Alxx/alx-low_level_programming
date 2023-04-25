#include "main.h"

/**
 * print last didgit
 * Author: Ane-Alx
 * Return: return o
 */
 
int print_last_digit(int n)
{
	int o;	

	if (n < 0)
		n = -n;

	o = n % 10;
		
	if (o < 0)
		o = -o;
	
	_putchar(o + '0');
	
	return (o);
		
}
