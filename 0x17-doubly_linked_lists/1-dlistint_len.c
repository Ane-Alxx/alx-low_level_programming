#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - function to geth the lenght of dlistint
* @h: might as well start here
* Return: the length obviously
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nod_h = h;
	size_t t = 0;

	while (nod_h)
	{
		t++;
		nod_h = nod_h->next;
	}

	return (t);
}
