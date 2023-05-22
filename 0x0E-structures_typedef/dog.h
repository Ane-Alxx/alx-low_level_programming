#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct fir dog info
* @name: ele one
* @age: ele two
* @owner: ele three
*
* Description: things about digs
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - dog struct
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
