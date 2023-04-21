#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point[ e(4) and q(16)]
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";

	while (n < 26)
	{
		if (n != 4 && n != 16)
		{
			putchar(letter[n]);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
