#include "holberton.h"

/**
 * _strchr - set memory function
 * @s: pointer to array
 * @c: char type
 *
 * Return: arrayed at check
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == c)
			return s;
		s++;
		if (!*s)
			return s;
	}
	return (s);
}
