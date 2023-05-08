#include "main.h"
/**
* _strpbrk - function for _strpbrk
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
		int m;

		while (*s)
		{
			m = 0;
			while (accept[m])
			{
			if (*s == accept[k])
			return (s);
			m++;
			}
		s++;
		}

	return ('\0');
}
