#include "main.h"

/**
 * something about jack
 * Author: Ane-Alx
 * 
 */
 
void jack_bauer(void)
{
	int outer;
	int inner;
	
	outer = 0;
	while (outer < 24)
	{
		inner = 0;
		while (inner < 60)
		{
			_putchar((outer / 10) + '0');
			_putchar((outer % 10) + '0');
			_putchar(':');
			_putchar((inner / 10) + '0');
			_putchar((inner % 10) + '0');
			_putchar('\n');
			inner++;
		}
		outer++;
	}
}
