#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*binary_to_uint - function for bin to uint
*
*@b: bin string
*
*Return: unsigned int val
*/
unsigned int binary_to_uint(const char *b)
{
	int cnter;
	unsigned int bival = 0;

	if (!b)
		return (0);

	for (cnter = 0; b[cnter]; cnter++)
	{
		if (b[cnter] < '0' || b[cnter] > '1')
			return (0);
		bival = 2 * bival + (b[cnter] - '0');
	}

	return (bival);
}
