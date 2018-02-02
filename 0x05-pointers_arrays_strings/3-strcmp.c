#include "holberton.h"

/**
 * _strcmp - compare two stings
 * @s1: char type, sting for comparison
 * @s2: char type, string for comparison
 *
 * Return:  value to represent if larger, smaller or same
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != 0 || s2[a] != 0; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
