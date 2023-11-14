#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 * Returns: The index of the value if it is found in the array, or -1 if it is not found.
 */
int jump_search(int *array, size_t size, int value)
{
   
	size_t jump_step = sqrt(size);
	size_t current_index = 0;

   
	while (current_index < size)
	{
		
		printf("Value checked array[%zu] = [%d]\n", current_index, array[current_index]);

	   
		if (array[current_index] == value)
		{
			return current_index;
		}
		else if (array[current_index] > value)
		{
			return -1;
		}
		else
		{
			current_index += jump_step;
		}
	}

	
	//If the value is not found in the array, return -1.
	 
	return -1;
}
