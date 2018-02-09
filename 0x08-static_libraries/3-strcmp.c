#include "holberton.h"

/**
 * _strcmp - return length of a string
 *
 * @s1: char type
 * @s2: char type
 * Return: positive negative or zero
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (a = 0; s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
