#include "main.h"
#include <stdio.h>

/**
* flip_bits - function for flip bits
* @n: numero uno
* @m: numero duo
* Return: bit to change log
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, log = 0;
	unsigned long int live;
	unsigned long int xive = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		live = xive >> t;
		if (live & 1)
			log++;
	}

	return (log);
}
