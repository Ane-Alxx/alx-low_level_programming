#include "main.h"
/**
* _strncat - concatenating
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int m = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (m < n && src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	dest[l] = '\0';
	return (dest);
}
