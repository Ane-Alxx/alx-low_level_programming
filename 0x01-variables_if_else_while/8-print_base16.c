#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;
	int o = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (o < 103)
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
