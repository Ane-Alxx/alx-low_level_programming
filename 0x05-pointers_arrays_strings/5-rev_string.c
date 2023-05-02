#include "main.h"

/**
* rev_string - function to reverse a string
* @s: Input string
* Return: String in reverse
*/

void rev_string(char *s)
{
	char reverse_str = s[0];
	int counter = 0;
	int i = 0;

	while (s[counter] != '\0')
	counter++;
	while (i < counter)
	{
		counter--;
		reverse_str = s[i];
		s[i] = s[counter];
		s[counter] = reverse_str;
		i++;
	}
}
