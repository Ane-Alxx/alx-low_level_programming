#include "lists.h"
#include <stdlib>
#include <sttdio.h>

/**
* free_listint2 - function for another free list int
* @head: top pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *container;

	if (head == NULL)
		return;

	while (*head)
	{
		container = (*head)->next;
		free(*head);
		*head = container;
	}

	*head = NULL;
}
