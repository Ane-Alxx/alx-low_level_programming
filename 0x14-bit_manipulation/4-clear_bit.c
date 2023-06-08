#include <stdio.h>
#include "main.h"
#include <stdlib.h>

#include "main.h"

/**
*clear_bit - function for clear bit
*@n: location to change
*@index: exact position
*Return: 1 or -1, Success or Fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
