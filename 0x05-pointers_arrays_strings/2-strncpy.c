#include "holberton.h"

/**
 * _strncpy - function to copy string from source to destination
 * @dest: pointer to destinatioin of string to be copied
 * @src: pointer to source of string to be copied
 * @n: int type to determine size of dest to copy into
 * Return: return dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
