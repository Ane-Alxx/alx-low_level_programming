#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - function for _strdup
*
* @str: char
*
* Return: 0 (Success)
*/
char *_strdup(char *str)
{
	char *word;
	int n = 0;
	int o = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	word = malloc(sizeof(char) * (n + 1));
	if (word == NULL)
	{
		return (NULL);
	}
	while (str[o])
	{
		word[o] = str[o];
		o++;
	}

	return (word);
}
