#include <stdio.h>
#include "main.h"

/**
* main - entry point args2
*
* @argc: array size
*
* @argv: array
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int p = 0;

	while (p < argc)
	{
		printf("%s\n", argv[p]);
		p++;
	}

	return (0);
}
