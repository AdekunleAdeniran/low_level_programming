#include <stdio.h>
#include "holberton.h"
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 * Return: return pointer to struct
 */

void print_dog(struct dog *d)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (d);
}
