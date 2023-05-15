#include "main.h"
#include <stdlib.h>

/**
* str_concat - function for str_concat
*
* @s1: var 1
*
* @s2: var 2
*
* Return: s1 + s2
*/
char *str_concat(char *s1, char *s2)
{
	char *join;
	int m = 0;
	int n = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[m] != '\0')
	{
		m++;
	}
	while (s2[n] != '\0')
	{
		n++;
	}
	join = malloc(sizeof(char) * (m + n + 1));
	if (join == NULL)
	{
		return (NULL);
	}
	m = 0;
	n = 0;
	while (s1[m] != '\0')
	{
		join[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		join[m] = s2[n];
		m++;
		n++;
	}
	join[m] = '\0';
	return (join);
}


