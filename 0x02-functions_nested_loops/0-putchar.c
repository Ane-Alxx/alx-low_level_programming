#include <stdio.h>

/**
 * main - Entry point
 * Author: Ane-Alx
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char character[8] = "_putchar";
	
	while (n < 8)
	{
		putchar(character[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
