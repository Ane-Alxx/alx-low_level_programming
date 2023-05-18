#include <stdlib.h>
#include "main.h"


/**
* *_calloc - function for
* @nmemb: elements count
* @size: size
*
* Return: pointer to memy
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int ink;
	unsigned int no = nmemb * size;
	char *p;
	char boo = 0;

	for (ink = 0; ink < no; ink++)
	{
		p[ink] = boo;
		if (nmemb == 0 || size == 0)
		{
			return (NULL);
		}
		p = malloc(size * nmemb);
		if (p == NULL)
		{
			return (NULL);
		}
	}

	return (p);
}
