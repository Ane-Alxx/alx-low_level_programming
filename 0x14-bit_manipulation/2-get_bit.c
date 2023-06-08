#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*get_bit - function for get bit
*@n: get from me
*@index: position you found me
* Return: valb
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int valb;

	if (index > 63)
		return (-1);

	valb = (n >> index) & 1;

	return (valb);
}
