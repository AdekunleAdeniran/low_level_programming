#include "holberton.h"
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
	struct dog *user;

	user = malloc(sizeof(struct dog));
	if (user == NULL)
		return (NULL);
	user->name = name;
	user->age = age;
	user->owner = owner;
	return (user);
}
