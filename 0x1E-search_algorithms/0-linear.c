#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the linear search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Returns: The index of the value if it is found in the array, or -1 if it is not found.
 */
int linear_search(int *array, size_t size, int value)
{
	// Iterate over the array and compare each element to the value being searched for.
	for (size_t i = 0; i < size; i++)
	{
		// Print the value being checked.
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);

		// If the value is found, return the index of the element.
		if (array[i] == value)
		{
			return i;
		}
	}

	// If the value is not found, return -1.
	return -1;
}
