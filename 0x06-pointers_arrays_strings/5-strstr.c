#include "holberton.h"

/**
 * _strstr - find a string in another string
 * @haystack: pointer to array to be searched
 * @needle: pointer to array to search for
 * Return: return pointer to location of string
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (Begin);
		haystack = Begin + 1;
	}
	return (NULL);
}
