#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* sum_listint - function for sum list int
* @head: top node
*
* Return: the total sum
*/
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *container = head;

	while (container)
	{
		total_sum += container->n;
		container = container->next;
	}

	return (total_sum);
}
