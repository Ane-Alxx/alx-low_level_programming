#include "main.h"
/**
* print_chessboard - function for print_chessboard
* @a: array
* Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	int m = 0;
	int n = 0;

	while (m < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[m][n]);
		n++;
		}
		m++;
		_putchar('\n');
	}
}
