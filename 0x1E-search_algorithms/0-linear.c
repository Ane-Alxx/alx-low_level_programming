#include "search_algos.h"
/**
 * linear_search - solution for task 1 linear search
 * @array: the array to search
 * @size: length of the array
 * @value: key value
 * Return: index on success, -1 or null on fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t nm;
	if (array == NULL)
		return (-1);
	for (nm = 0; nm < size; nm++)
	{

		printf("Value checked array[%ld] = [%d]\n", nm, array[nm]);
		if (array[nm] == value)
			return (nm);

	}
	return (-1);
}
