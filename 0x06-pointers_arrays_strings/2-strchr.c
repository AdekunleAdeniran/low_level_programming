#include "holberton.h"

/**
 * _strchr - checks for character in a string
 * @s: pointer to array
 * @c: char type
 *
 * Return: arrayed at check
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
