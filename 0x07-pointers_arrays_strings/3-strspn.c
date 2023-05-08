#include "main.h"
/**
* _strspn - function for _strspn
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int hold = 0;
	int m;

	while (*s)
	{
		m = 0;
		while (accept[m])
		{
			if (*s == accept[m])
			{
				hold++;
				m++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (hold);
		}
		s++;
	}
	return (n);
}
