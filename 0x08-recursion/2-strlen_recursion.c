#include "main.h"
#include <stddef.h>
/**
* _strlen_recursion - Function for _strlen_recursion
* @s: The string to be measured.
*
* Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != NULL)
	{
		n++;
		n = n +  _strlen_recursion(s + 1);
	}

	return (n);
}
