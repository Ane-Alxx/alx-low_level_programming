#include <stdio.h>
/**
 * 
 * 
 * 
 * Return: always 0 (success)
 */

int main(void)
{
	int i = 1;
	int j = 1;
	int k = 2;
	int next = 0;
	int sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%d\n", sum);

	return (0);
}
