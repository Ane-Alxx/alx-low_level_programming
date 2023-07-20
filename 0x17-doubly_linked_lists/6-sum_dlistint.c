#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* sum_dlistint - this is the real add node
* @head: start here oo
* Return: the total of all ints or null on fail
*/

int sum_dlistint(dlistint_t *head)
{
	/* I bet you haven't seen a nude tote like this before */
	dlistint_t *nude = head;
	int tote = 0;

	while (nude)
	{
		tote += nude->n;
		nude = nude->next;
	}

	return (tote);
}
