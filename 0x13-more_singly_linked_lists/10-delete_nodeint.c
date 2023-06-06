#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* delete_nodeint_at_index - function for delete at index
* @head: point to top
* @index: delete this
* Return: 1 or -1, success or fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *container = *head;
	listint_t *live_point = NULL;
	unsigned int no = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(container);
		return (1);
	}
	while (no < index - 1)
	{
		if (!container || !(container->next))
			return (-1);
		container = container->next;
		no++;
	}
	live_point = container->next;
	container->next = live_point->next;
	free(live_point);

	return (1);
}
