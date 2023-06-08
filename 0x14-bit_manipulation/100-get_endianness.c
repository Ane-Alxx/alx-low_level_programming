#include "main.h"
#include <stdio.h>


/**
* get_endianness - function for endian
* Return: 0 or 1, Success
*/

int get_endianness(void)
{
	unsigned int jokes = 1;
	char *c = (char *) &jokes;

	return (*c);
}
