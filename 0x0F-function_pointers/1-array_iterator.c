#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - function array_iterator
* @array: arriii
* @size: length
* @action: pointy
* Return: nill
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int nummy = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (nummy < size)
	{
		action(array[nummy]);
		nummy++;
	}
}
