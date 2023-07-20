#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* insert_dnodeint_at_index - put a node in a specific position
* @h: start here
* @idx: then get here and put it
* @n: lets save some dirt...data on it
* Return: it's location, or null if fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *meta = *h, *welp;
	unsigned int m, t = 0;

	welp = malloc(sizeof(dlistint_t));
	if (welp == NULL)
		return (NULL);
	welp->n = n;

	if (idx == 0)
	{
		welp->prev = NULL;
		welp->next = *h;
		if (*h)
			(*h)->prev = welp;
		*h = welp;
		return (*h);
	}

	m = idx - 1;
	while (meta && t != m)
	{
		t++;
		meta = meta->next;
	}

	if (t == m && meta)
	{
		welp->prev = meta;
		welp->next = meta->next;
		if (meta->next)
			meta->next->prev = welp;
		meta->next = welp;
		return (welp);
	}
	free(welp);
	return (NULL);
}
