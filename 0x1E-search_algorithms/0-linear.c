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
	//just in case the array is empty
	if (array == NULL)
		return (-1);

	//loop through all values till key value is found
	for (nm = 0; nm < size; nm++)
	{

		printf("Value checked array[%ld] = [%d]\n", nm, array[nm]);
		if (array[nm] == value)
			return (nm);

	}
	//the item was definetly not found
	return (-1);
}
