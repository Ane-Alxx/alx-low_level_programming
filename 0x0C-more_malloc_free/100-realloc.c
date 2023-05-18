#include <stdlib.h>
#include "main.h"

/**
* *_realloc - function for
*
* @ptr: pointer to the memy
*
* @old_size: size
*
* @new_size: size
*
* Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *op;
	unsigned int ink;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	p1 = malloc(new_size);
	if (!p1)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		ink = 0;
		while (ink < new_size)
		{
			p1[ink] = old_ptr[ink];
			ink++;
		}
	}
	if (new_size > old_size)
	{
		ink = 0;	
		while (ink < old_size)
		{
			p1[ink] = old_ptr[ink];
			ink++;
		}
	}
	free(ptr);

	return (p1);
}
