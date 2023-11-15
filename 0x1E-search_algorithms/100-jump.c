#include "search_algos.h"

/**
 * jump_search - solution for the advanced jump search
 * @array: way to the array
 * @size: length of array
 * @value: key value
 * Return: index on success, -1 or NULL on fail
 */
int jump_search(int *array, size_t size, int value)
{
	size_t nm, jump = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[min_min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		nm = jump;
		jump = step;
		step += sqrt(size);
		if (jump >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", nm, jump);
	while (array[jump] < value)
	{
		jump += 1;
		if (jump == min_min(step, size))
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
	}
	printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

	if (array[jump] == value)
		return (jump);
	else
		return (-1);
}


/**
 * min_min - just a simple function to find the min
 * @num1: first value
 * @num2: second value
 * Return: num1 or num2 on success
 */
size_t min_min(size_t num1, size_t num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}
