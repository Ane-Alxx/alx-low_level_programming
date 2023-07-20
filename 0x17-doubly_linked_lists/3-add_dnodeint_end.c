#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* add_dnodeint_end - add at the end of the list not sum
* @head: the start of all the stuff
* @n: well you'll see
* Return: node addy on success, null on fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *welp, *mmh = *head;

	welp = malloc(sizeof(dlistint_t));
	if (welp == NULL)
		return (NULL);
	welp->n = n;
	welp->next = NULL;

	if (mmh)
	{
		while (mmh->next)
			mmh = mmh->next;
		welp->prev = mmh;
		mmh->next = welp;
	}
	else
	{
		*head = welp;
		welp->prev = NULL;
	}

	return (welp);
}
