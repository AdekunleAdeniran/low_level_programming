#include "holberton.h"

/**
 * *_strstr - find a string in another string
 * @haystack: pointer to array to be searched
 * @needle: pointer to array to search for
 * Return: return pointer to location of string
 */

char *_strstr(char *haystack, char *needle)
{
	const char *s, *t;

	if (!haystack || !needle)
		return (0);

	if (!*needle)
		return ((char *)haystack);
	for (; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			t = haystack;
			s = needle;
			for (; *t; s++, t++)
			{
				if (*t != *s)
					break;
			}
			if (!*s)
				return ((char *)haystack);
		}
	}
	return (0);
}
