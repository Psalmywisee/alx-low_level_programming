#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - function to print a struct dog
* @d: element of struct dog to print
*/
	void print_dog(struct dog *d)
{
	if (d == NULL)
	return (0);
	if (d->name == NULL)
	d->name = "(nil)";
	if (d->owner == NULL)
	d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
