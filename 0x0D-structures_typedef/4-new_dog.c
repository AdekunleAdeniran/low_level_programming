#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
/**
 * _strcpy - function to copy string from source to destination
 *@dest: pointer to destinatioin of string to be copied
 *@src: pointer to source of string to be copied
 * Return: return the value at dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * *new_dog - function to create new dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: Always success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newd->name == NULL)
		return (NULL);
	_strcpy(newd->name, name);

	newd->age = age;

	if (owner == NULL)
	{
		free(newd->owner);
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newd->owner == NULL)
		return (NULL);
	_strcpy(newd->owner, owner);

	return (newd);
}
