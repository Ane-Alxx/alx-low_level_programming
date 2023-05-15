#include "main.h"
#include <stdlib.h>

/**
* **strtow - function for strtow
* @str: string 
*
* Return: pointer  (Success)
* 
*/

char **strtow(char *str)
{
	char **mesh;
	int l = 0;
	int w;

	while (*(str + l))
	{
		l++;
	}
	w = sizeof(str);
	if (w == 0)
	{
		return (NULL);
	}
	mesh = (char **) malloc(sizeof(char *) * (w + 1));
	if (mesh == NULL)
	{
		return (NULL);
	}
	return (mesh);
}
