#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - function for
*
* @b: bytes
*
* Return: pointer to memy
*/
void *malloc_checked(unsigned int b)
{
	void *fngr;

	fngr = malloc(b);
	if (fngr == NULL)
	{
		exit(98);
	}

	return (fngr);
}
