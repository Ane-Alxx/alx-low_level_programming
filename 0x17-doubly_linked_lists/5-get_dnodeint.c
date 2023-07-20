#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* get_dnodeint_at_index - give some element in the list
* @head: start searching from here
* @index: the some element we want
* Return: the some element we want or null on fail
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nude = head;
	unsigned int t = 0;

	while (nude && t != index)
	{
		t++;
		nude = nude->next;
	}
	if (nude && t == index)
		return (nude);
	return (NULL);
}
