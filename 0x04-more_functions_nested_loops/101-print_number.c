#include "main.h"

/**
* print_number - prints an integer
* @n: integer to be printed
*/
void print_number(int n)
{
	unsigned int I;

	if (n < 0)
	{
		I = -n;
		_putchar('-');
	} else
	{
		I = n;
	}

	if (I / 10)
	{
		print_number(I / 10);
	}

	_putchar((I % 10) + '0');
}
