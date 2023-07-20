#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - function for printing lists
* @h: lets begin with this shall we.
* Return: something on success
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nod_h = h;
	size_t t = 0;

	while (nod_h)
	{
		printf("%i\n", nod_h->n);
		t++;
		nod_h = nod_h->next;
	}

	return (t);
}
