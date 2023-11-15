#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 * Returns:The first index where `value` is located, or -1 if it is not found.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return -1;
	}
	size_t jumpStep = (size_t)sqrt(size);
	size_t current = 0;
	while (current < size && array[current] <= value)
	{
		printf("Value checked array[%zu] = [%d]\n", current, array[current]);
		if (array[current] == value)
		{
			return current;
		}
		current += jumpStep;
	}
	if (current >= size)
	{
		current = size - 1;
	}
	printf("Value found between indexes [%zu] and [%zu]\n", current - jumpStep, current);

	for (size_t i = current - jumpStep; i <= current; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}
	return -1;
}
