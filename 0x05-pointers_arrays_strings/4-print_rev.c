#include "main.h"
/**
* print_rev - prints a string, in reverse,
* followed by a new line
* @s: string
* return: 0
*/

void print_rev(char *s)
{
	int count = 0;
	int point;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (point = count; point > 0; point--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
