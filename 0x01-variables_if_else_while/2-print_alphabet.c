#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point [it's my comment, just testing]
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet_list[26] = "abcdefghijklmnopqrstuvwxyz";
	int n = 0;

	while (n < 26)
	{
		putchar(alphabet_list[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
