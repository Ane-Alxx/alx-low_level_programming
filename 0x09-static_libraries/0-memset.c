#include "main.h"
/**
* _memset - set intial memory slot
* @s: starting address of memory to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return: array
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
