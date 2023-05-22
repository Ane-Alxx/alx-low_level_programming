#include <stdlib.h>
#include "dog.h"

/**
* _strlen - gimme gimme string.length
* @s: my baby stringy
*
* Return: string.length
*/
int _strlen(char *s)
{
	int ono;

	ono = 0;

	while (s[ono] != '\0')
	{
		ono++;
	}

	return (ono);
}

/**
* *_strcpy - some old string copy function
*
* @dest: something to point
* @src: stringy
*
* Return: pointer
*/
char *_strcpy(char *dest, char *src)
{
	int lenny = 0;
	int index = 0;

	while (src[lenny] != '\0')
	{
		lenny++;
	}
	while (index < lenny)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}

/**
* new_dog - spawn dog
* @name: Ele one
* @age: Ele two
* @owner: lEe three
*
* Return: pointer (Success), NULL (Fail)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int lenny1, lenny2;

	lenny1 = _strlen(name);
	lenny2 = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (lenny1 + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(sizeof(char) * (lenny2 + 1));
	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}
	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);
}

