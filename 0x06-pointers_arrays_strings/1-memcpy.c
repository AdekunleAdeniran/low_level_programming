#include "holberton.h"

/**
 * _memcpy - copy into memory location
 * @dest: pointer to destination array
 * @src: pointet to source array
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
