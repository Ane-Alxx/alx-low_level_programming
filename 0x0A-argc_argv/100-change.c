#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - entry point for change
*
* @argc: size of array
* @argv: array
*
* Return: 0 (Success), 1 (Fail)
*/
int main(int argc, char *argv[])
{
	int n;
	int m = 0;
	int change;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	change = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	while (m < 5 && n >= 0)
	{
		while (n >= coin[m])
		{
			change++;
			n = n - coin[m];
		}
		m++;
	}
	printf("%d\n", change);

	return (0);
}
