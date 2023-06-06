#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* reverse_listint - function for rev int
* @head: point to top
*
* Return: point
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *fwd = NULL;

	while (*head)
	{
		fwd = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = fwd;
	}

	*head = back;

	return (*head);
}
