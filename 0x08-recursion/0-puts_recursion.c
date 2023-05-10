#include "main.h"
/**
* _puts_recursion - function for _puts_recursion
* @s: input
* Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
	if (*s != NULL)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
