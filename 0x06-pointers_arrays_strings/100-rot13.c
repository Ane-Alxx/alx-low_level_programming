#include "main.h"
#include <stdio.h>

/**
* rot13 - encoder rot13
* @s: pointer to string params
*
* Return: *s
*/

char *rot13(char *s)
{
	int i;
	int j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letter_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = letter_rot[j];
				break;
			}
		}
	}
	return (s);
}
