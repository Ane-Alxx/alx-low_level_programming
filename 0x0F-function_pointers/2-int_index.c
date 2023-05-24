#include "function_pointers.h"
/**
* int_index - function
* @array: arrii
* @size: length of arriii
* @cmp: ptr
* Return: (success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int nummy = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	while (nummy < size)
	{
		if (cmp(array[nummy]))
		{
			return (nummy);
		}
	}
	return (-1);
}
