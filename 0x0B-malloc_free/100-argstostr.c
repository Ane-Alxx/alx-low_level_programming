#include "main.h"
#include <stdlib.h>
/**
* argstostr - function for argstostr
*
* @ac: variable
*
* @av: pointer
*
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int p = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	char *word;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (p < ac)
	{
		while (av[p][q])
		{
			q++;
			s++;
		}
		p++;
	}
	s += ac;
	word = malloc(sizeof(char) * s + 1);
	if (word == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
		{
			word[r] = av[p][q];
			r++;
		}
		if (word[r] == '\0')
		{
			word[r++] = '\n';
		}
	}

	return (word);
}

