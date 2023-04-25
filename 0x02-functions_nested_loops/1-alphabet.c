#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Author: Ane-Alx
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		_putchar(Alpha);
	}
	_putchar('\n');
}
