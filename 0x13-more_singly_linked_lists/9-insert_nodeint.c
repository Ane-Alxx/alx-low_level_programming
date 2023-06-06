#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* insert_nodeint_at_index - function for
* @head: point to top
* @idx: new node position
* @n: content for node
* Return: point or NULL, success or fail
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int no;
	listint_t *w;
	listint_t *container = *head;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}

	for (no = 0; container && no < idx; no++)
	{
		if (no == idx - 1)
		{
			w->next = container->next;
			container->next = w;
			return (w);
		}
		else
			container = container->next;
	}

	return (NULL);
}
