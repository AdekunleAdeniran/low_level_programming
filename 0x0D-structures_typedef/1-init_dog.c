#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize function for struct dog
 * @d: pointer to dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: return pointer to struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
