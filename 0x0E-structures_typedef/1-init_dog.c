#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog earlier created
* @d: pointer to struct dog to be initialised
* @name: name of sturct dog to be initialised
* @age: age of struct dog to be initialised
* @owner: owner of struct dog to be initialised
*/
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
