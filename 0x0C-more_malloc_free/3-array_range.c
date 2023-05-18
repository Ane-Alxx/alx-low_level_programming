#include <stdlib.h>
#include "main.h"

/**
* *array_range - function for
*
* @min: min
* @max: max
*
* Return: pointer
*/

int *array_range(int min, int max)
{
	int *m;
	int ink, s;

	if (min > max)
	{
		return (NULL);
	}
	s = max - min + 1;
	m = malloc(sizeof(int) * s);
	if (m == NULL)
	{
		return (NULL);
	}
	for (ink = 0; min <= max; ink++)
	{
		m[ink] = min++;
	}

	return (m);
}
