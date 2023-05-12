#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num: checks the number
* @str: string array
*
* Return: 1 (Success)
*/
int check_num(char *str)
{
	unsigned int m;

	m = 0;
	while (m < strlen(str))
	{
		if (!isdigit(str[m]))
		{
			return (0);
		}
		m++;
	}
	return (1);
}

/**
* main - entry point
* @argc: array size
* @argv: array
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int m;
	int temp;
	int total = 0;

	m = 1;
	while (m < argc)
	{
		if (check_num(argv[m]))

		{
			temp = atoi(argv[m]);
			total = total + temp;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		m++;
	}
	printf("%d\n", total);

	return (0);
}
