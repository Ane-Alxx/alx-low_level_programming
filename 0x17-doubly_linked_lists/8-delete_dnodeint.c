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
	dlistint_t *meta = *head;
	dlistint_t *welp = *head;
	unsigned int m;
	unsigned int t = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	m = index - 1;
	while (meta && t != m)
	{
		t++;
		meta = meta->next;
	}

	if (t == m && meta)
	{
		node_to_delete = meta->next;
		if (node_to_delete->next)
		node_to_delete->next->prev = meta;
		meta->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
