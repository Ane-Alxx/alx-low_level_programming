#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Author: Ane-Alx
 * Return: Always 0 (Success)
 */

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		_putchar('\n');
	}
}
