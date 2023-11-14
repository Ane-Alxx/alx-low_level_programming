#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array of integers using the Interpolation search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 *
 * Assumptions:
 * - The `array` is sorted in ascending order.
 *
 * Returns:
 * - The index of the value if it is found in the array, or -1 if it is not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return -1;
	}

	size_t low = 0;
	size_t high = size - 1;

	 while (low <= high)
	{
	  
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < 0 || pos >= size)
		{
			printf("Value checked array[%zu] is out of range\n", pos);
			return -1;
		}
		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return pos;
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	return -1;
}
