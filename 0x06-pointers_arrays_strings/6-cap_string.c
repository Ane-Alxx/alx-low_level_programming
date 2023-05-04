#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
*
* Return: A pointer to the changed string.
*/
char *cap_string(char *str)
{
	int i = 0;
	char symbs [10] = “,;.!?\”(){}”;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		for (int j = 0; j < 10; j++)
		{
			if (str[i - 1] == symbs[j])
			{
				str[i] -= 32;
			}
		}
		i++;
	}

	return (str);
}
