#include "hash_tables.h"

/**
* hash_djb2 - function for hash_djb2
*
* @str: the string
* Return: code on success
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int code;
	int h;

	code = 5381;
	while ((h = *str++))
	{
		code = ((code << 5) + code) + h; 
	}
	return (code);
}
