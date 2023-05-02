#include "main.h"
/**
* puts_half - half of a string
* @str: input
* Return: half of input
*/

void puts_half(char *str)
{
	int m;
	int n;
	int count = 0;

	while (str[m] != '\0')
	{
		count++;
		m++;
	}

	n = (count / 2);

	if ((count % 2) == 1)
		n = ((count + 1) / 2);
	m = n;

	while (str[m] != '\0')
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
