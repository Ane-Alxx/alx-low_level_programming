#include <stdlib.h>
#include "lists.h"

/**
* list_len - function for list_len
* @h: pointy thingy
*
* Return: no_of_eles
*/

size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
