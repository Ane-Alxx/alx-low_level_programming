#include <stdio.h>
#include "main.h"

/**
* _atoi - function _atoi
* @s: string
*
* Return: int
*/
int _atoi(char *s)
{
	int i = 0;
	int m = 0;
	int n = 0;
	int l = 0;
	int p = 0;
	int num = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && p == 0)
	{
		if (s[i] == '-')
			++m;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (m % 2)
				num = -num;
			n = n * 10 + num;
			p = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			p = 0;
		}
		i++;
	}

	if (p == 0)
		return (0);

	return (n);
}

/**
* main - multiplies two numbers
* @argc: size of array
* @argv: array
*
* Return: 0 (Success), 1 (fail)
*/
int main(int argc, char *argv[])
{
	int mul, n1, n2;

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

