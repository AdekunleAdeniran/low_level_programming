#include "holberton.h"

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{

	}
	return (b);
}
/**
 * _strcmp - return length of a string
 *
 * @s1: char type
 * @s2: char type
 * Return: positive negative or zero
 */

int _strcmp(char *s1, char *s2)
{
	if (_strlen(s1) == _strlen(s2))
		return (0);
	else if (_strlen(s1) > _strlen(s2))
		return (15);
	else
		return (-15);
}
