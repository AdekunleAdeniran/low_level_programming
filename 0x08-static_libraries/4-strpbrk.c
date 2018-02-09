#include "holberton.h"

/**
 * _strchr - check for character in an array
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
/**
 * *_strpbrk - find first appearance of a char in an array
 *
 * @s: pointer array to be searched
 * @accept: pointer array with char to be searched
 * Return:  pointer to array
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		if (_strchr(accept, *s) != 0)
			return ((char *) s);
	}
	return (0);
}
