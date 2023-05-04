#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints buffer
* @b: buffer
* @size: size
* Return: void
*/

void print_buffer(char *b, int size)
{
	int o = 0;
	int p;
	int q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		p = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		while (q < 10)
		{
			if (q < p)
				printf("%02x", *(b + o + q));
			else
				printf("  ");
			if (q % 2)
			{
				printf(" ");
			}
			q++;
		}
		while (q < p)
		{
			int s = *(b + o + q);

			if (s < 32 || s > 132)
			{
				s = '.';
			}
			printf("%c", s);
			q++;
		}
		printf("\n");
		o += 10;
	}
}

