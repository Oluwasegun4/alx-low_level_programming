#include "dog.h"
/**
  * init_dog - create a function that defines struct dog
  * @d: struct name
  * @name: dog name
  * @age: dog's age
  * @owner: dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
