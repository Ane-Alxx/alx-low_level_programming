#include “main.h”
#include <unistd.h>

/**
*_putchar - fiction
*@c: Char to print
*
*Return: 1 (Success)
* -1 on error,  error is set appropriately 
*/

int _putchar(char c)
{
	return(write(1, &c, 1)
}
