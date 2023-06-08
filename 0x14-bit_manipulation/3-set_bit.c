#include <stdio.h>
#include "main.h"
#include <stdlib.h>

#include "main.h"

/**
* set_bit - function for set bit
* @n: locate the change
* @index: found you
*
* Return: 1 or -1, success or fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
