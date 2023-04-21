#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point [52]
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char L[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n = 0;

	while (n < 52)
	{
		putchar(L[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
