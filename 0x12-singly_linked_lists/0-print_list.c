#include <stdio.h>
#include "lists.h"

/**
* print_list - print_list function
* @h: pointy thingy to next
*
* Return: no_of_nodes
*/
size_t print_list(const list_t *h)
{
	size_t lenny = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		lenny++;
	}

	return (lenny);
}
