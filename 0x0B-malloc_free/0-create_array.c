#include "main.h"
#include <stdlib.h>

/**
* create_array - function for create_array
* @size: array length
* @c: character c
*
* Return: pointer(Success), NULL (Fail)
*
*/
char *create_array(unsigned int size, char c)
{
	char *word;
	unsigned int n;

	word = malloc(sizeof(char) * size);
	if (size == 0 || word == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (n < size)
	{
		word[n] = c;
		n++;
	}
	return (word);
}
