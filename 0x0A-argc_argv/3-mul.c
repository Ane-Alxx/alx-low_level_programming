#include <stdio.h>
#include "main.h"

/**
* _atoi - function for _atoi
* @s: string at pointer s
*
* Return: integer from string
*/
int _atoi(char *s)
{
	int l = 0;
	int m = 0;
	int n = 0;
	int length = 0;
	int p = 0;
	int num = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while ((l < length) && (p == 0))
	{
		if (s[l] == '-')
		{
			++m;
		{
		if ((s[l] >= ‘0’) && (s[l] <= ‘9’))
		{
			num = s[l] - '0';
			if (m % 2)
			{
				num = -num;
			}
			n = n * 10 + num;
			p = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
			{
				break;
			}
			p = 0;
		}
		l++;
	}
	if (p == 0)
	{
		return (0);
	}

	return (n);
}

/**
* main - multiplier
*
* @argc: size of array
*
* @argv: array
*
* Return: 0 (Success), 1 (Fail)
*/

int main(int argc, char *argv[])
{
	int mul;
	int n1;
	int n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	mul = n1 * n2;

	printf("%d\n", mul);

	return (0);
}
