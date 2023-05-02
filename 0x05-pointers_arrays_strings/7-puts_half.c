#include "main.h"
/**
* puts_half - prints half of a string
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
	int m, n, o;

	o = 0;

	for (m = 0; str[m] != '\0'; m++)
		o++;

	n = (o / 2);

	if ((o % 2) == 1)
		n = ((o + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}
