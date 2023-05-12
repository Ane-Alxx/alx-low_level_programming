#include "main.h"

/**
* char *_strcpy - copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	while (n < m)
	{
		dest[n] = src[n];
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
