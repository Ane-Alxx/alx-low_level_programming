#include "lists.h"
#include <stdlib>
#include <stdio.h>

/**
*free_listint - function for free listint
*@head: list to set free
*/
void free_listint(listint_t *head)
{
	listint_t *container;

	while (head)
	{
		container = head->next;
		free(head);
		head = container;
	}
}
