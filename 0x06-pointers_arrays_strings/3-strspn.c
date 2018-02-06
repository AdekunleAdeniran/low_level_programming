#include "holberton.h"

/**
 * _strspn - function to find size of array containing words
 * @s: pointer array to be searched
 * @accept: pointer array with char to be searched
 * Return: length of characters found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
