#include <stdio.h>
#include "main.h"

/**
 * main - code to print_alphabet_x10
 * Author: Ane-Alx
 * Return: (Success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int b;

	b = 0;
	while (b < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		b++;
	}
}
