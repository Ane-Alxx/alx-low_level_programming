#include "main.h"
/**
* puts2 - print only one character
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
	int count = 0;
	int n = 0;
	char *m = str;
	int o = 0;

	while (*m != '\0')
	{
		m++;
		count++;
	}
	n = count - 1;
	while (o <= n)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
		o++;
	}
	_putchar('\n');
}
