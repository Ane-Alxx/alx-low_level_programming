#include <stdio.h>
#include <stdlib.h>

/**
* main - entry
* @argc: args
* @argv: args
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int bytes, indie;
	char *arri;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arri = (char *)main;

	for (indie = 0; indie < bytes; indie++)
	{
		if (indie == bytes - 1)
		{
			printf("%02hhx\n", arri[indie]);
			break;
		}
		printf("%02hhx ", arri[indie]);
	}
	return (0);
}
