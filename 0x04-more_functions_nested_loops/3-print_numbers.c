#include "main.h"
#include <stdio.h>

/**
* print_numbers - print numbers 0 through 9
* return: void
*/

void print_numbers(void)
{
	int i = 48;

	while (i  <  58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
