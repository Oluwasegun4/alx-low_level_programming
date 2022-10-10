#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stddef.h>
/**
 * struct dog - defines the parameters for the dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: defines the parameters of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
