#include "holberton.h"

/**
 * *_memset - set memory function
 * @s: pointer to array
 * @b: char type
 * @n: unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
