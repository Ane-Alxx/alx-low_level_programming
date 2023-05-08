#include "main.h"
#include <stdio.h>
/**
* print_diagsums - function for print_diagsums
* @a: input
* @size: input
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int m1 = 0;
	int m2 = 0;
	int n = 0;

	while (n < size)
	{
		m1 = m1 + a[n * size + n];
		n++;
	}
	n = size - 1;
	while (n >= 0)
	{
		m2 += a[n * size + (size - n - 1)];
		n--;
	}

	printf("%d, %d\n", m1, m2);
}
