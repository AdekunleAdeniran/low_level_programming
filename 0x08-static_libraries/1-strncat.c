#include "holberton.h"

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{

	}
	return (b);
}

/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 *
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int a;

	dest_len = _strlen(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	return (dest);
}
