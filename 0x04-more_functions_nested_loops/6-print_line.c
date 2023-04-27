#include "main.h"
#include <stdio.h>

/**
* print_line - prints a line in the terminal
* @n: amount of times the underscore(_) would be printed
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			 i++;
		}
		_putchar('\n');
	}

}
