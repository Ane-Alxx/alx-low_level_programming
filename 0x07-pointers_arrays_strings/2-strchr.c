#include "main.h"
/**
* _strchr - function for strchr_c
* @s: input
* @c: input
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	i++;
	}
	return (0);
}
