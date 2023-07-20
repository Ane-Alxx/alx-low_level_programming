#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - get read of the specified
* @head: start search here
* @index: fin the specified here
* Return: posive and negative 1, success or fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int m = 0;
	dlistint_t *e;
	dlistint_t **r;

	if (!head || !*head)
		return (-1);

	r = head;

	while (m < index && (*r)->next)
	{
		r = &((*r)->next);
		m++;
	}
	if (m < index)
		return (-1);

	if ((*r)->next)
		((*r)->next)->prev = (*r)->prev;
	e = *r;
	*r = (*r)->next;
	free(e);
	return (1);
}
