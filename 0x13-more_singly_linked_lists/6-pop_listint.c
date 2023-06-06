#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* pop_listint - function for pop list int
* @head: head of the list to pop
*
* Return: deleted content or 0 if no content
*
*/
int pop_listint(listint_t **head)
{
	listint_t *container;
	int content;

	if (!head || !*head)
	{
		return (0);
	}
	content = (*head)->n;
	container = (*head)->next;
	free(*head);
	*head = container;

	return (content);
}
