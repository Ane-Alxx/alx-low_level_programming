#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint - function to sum up then nodes
* @head: start from here no harm
* @n: well on to the next with this
* Return: something on success, null on fail
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *welp;
	/*welp is the new node...I play too much*/
	welp = malloc(sizeof(dlistint_t));
	if (welp == NULL)
		return (NULL);

	welp->n = n;
	welp->prev = NULL;
	welp->next = *head;
	if (*head)
		(*head)->prev = welp;
	*head = welp;

	return (welp);
}
