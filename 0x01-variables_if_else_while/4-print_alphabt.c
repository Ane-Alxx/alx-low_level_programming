#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point [no e(4) no q(16)]
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
    char alpha_list[26] = "abcdefghijklmnopqrstuvwxyz";
    
	while (n < 26)
	{
		if (n != 4 && n != 16)
		{
			putchar(alpha_list[n]);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
