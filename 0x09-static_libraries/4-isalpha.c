#include <stdio.h>
#include "main.h"

/**
 * main - check alphabets
 * Author: Ane-Alx
 * Return: 1 if c is a letter, 0 otherwise
 */
 
int _isalpha(int letter)
{
	return ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'));
}
