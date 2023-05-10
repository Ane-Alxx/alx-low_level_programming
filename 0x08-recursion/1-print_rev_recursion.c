#include "main.h"
/**
* _print_rev_recursion - function for _print_rev_recursion
* @s: The string to be printed.
*/
void _print_rev_recursion(char *s)
{
	if (*s != NULL)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
