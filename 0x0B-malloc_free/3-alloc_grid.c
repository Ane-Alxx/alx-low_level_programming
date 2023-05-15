#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function for alloc_grid
*
* @width: width input
*
* @height: height input
*
* Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **pt;
	int ax = 0;
	int by = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pt = malloc(sizeof(int *) * height);
	if (pt == NULL)
	{
		return (NULL);
	}
	while (ax < height)
	{
		pt[ax] = malloc(sizeof(int) * width);

		if (pt[ax] == NULL)
		{
			while (ax >= 0)
			{
				free(pt[ax]);
				ax--;
			}
			free(pt);
			return (NULL);
		}
		ax++;
	}
	ax = 0;
	while (ax < height)
	{
		while (by < width)
		{
			pt[ax][by] = 0;
			by++;
		}
		ax++;
	}

	return (pt);
}
