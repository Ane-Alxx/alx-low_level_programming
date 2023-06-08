#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*print_binary - function for print bin
*@n: print this
*/
void print_binary(unsigned long int n)
{
	int t, ct = 0;
	unsigned long int live;

	for (t = 63; t >= 0; t—)
	{
		live = n >> t;

		if (live & 1)
		{
			_putchar('1');
			ct++;
		}
		else if (ct)
			_putchar('0');
	}
	if (!ct)
		_putchar('0');
}
