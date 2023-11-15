#include "search_algos.h"
/**
 * binary_search - solution for task 1 binary search
 * @array: the array to split and search
 * @size: length of array
 * @value: key value
 * Return: index on success, -1 or NULL on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t zhong, nm, xia = 0;
	size_t shang = size - 1;

	if (array == NULL)
		return (-1);
	while (xia <= shang)
	{
		zhong = (xia + shang) / 2;
		printf("Searching in array: ");
		for (nm = xia; nm < shang + 1; nm++)
		{
			printf("%d", array[nm]);
			if (nm != shang)
				printf(", ");
		}
		printf("\n");
		if (value == array[zhong])
			return (zhong);
		if (value > array[zhong])
			xia = zhong + 1;
		else
			shang = zhong - 1;
	}
	return (-1);
}
