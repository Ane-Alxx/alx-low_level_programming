#include <stdio.h>
#include "main.h"

/**
 * lowercase
 * Author: Ane-Alx
 * Return: 1 if lowercase 0 otherwise (Success)
 */
 
int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}
