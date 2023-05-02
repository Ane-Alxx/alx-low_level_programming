#include "main.h"
/**
*print_array - prints arrays
*@a: array
*@n: is the number of elements to be printed
*
*Return: a and n inputs
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
