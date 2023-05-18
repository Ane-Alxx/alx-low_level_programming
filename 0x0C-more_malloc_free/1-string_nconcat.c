#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - function for
* @s1: str one
* @s2: str two
* @n: bytes
*
* Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sting;
	unsigned int ink = 0, jug = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
	{
		l1++;
	}
	while (s2 && s2[l2])
	{
		l2++;
	}
	if (n < l2)
	{
		s = malloc(sizeof(char) * (l1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	while (ink < l1)
	{
		s[ink] = s1[ink];
		ink++;
	}
	while ((n < l2) && (ink < (l1 + n)))
	{
		s[ink++] = s2[jug++];
	}
	while ((n >= l2) && (I < (l1 + l2)))
	{
		s[ink++] = s2[jug++];
	}

	s[ink] = '\0';

	return (s);
}
