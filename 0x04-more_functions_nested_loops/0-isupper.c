#include "main.h"

/**
* _isupper - check if c is uppercase
* @c: char to check
*
* Return: 0 if not upper case and  1 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
