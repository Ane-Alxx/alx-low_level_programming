#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - function for print_name
* @name: strinny
* @f: pointy
* Return: nill
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
