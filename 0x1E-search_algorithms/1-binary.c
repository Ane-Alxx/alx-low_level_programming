#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Returns:The index of the value if it is found in the array, or -1 if it is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	// Check if the array is NULL or empty.
	if (array == NULL || size == 0)
	{
		return -1;
	}

	// Print the array being searched.
	printf("Searching in array: ");
	for (size_t i = 0; i < size; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");

	// Set the low and shang indices of the subarray to search.
	size_t xia = 0;
	size_t shang = size - 1;

	// While the low index is less than or equal to the high index, continue searching.
	while (xia <= shang)
	{
		// Calculate the middle index of the subarray.
		size_t zhong = (xia + shang) / 2;

		// If the value is equal to the element at the middle index, return the middle index.
		if (array[zhong] == value)
		{
			return zhong;
		}

		// If the value is less than the element at the middle index, search the left half of the subarray.
		else if (value < array[zhong])
		{
			shang = zhong - 1;
		}

		// Otherwise, search the right half of the subarray.
		else
		{
			xia = zhong + 1;
		}
	}

	// If the value is not found, return -1.
	return -1;
}
