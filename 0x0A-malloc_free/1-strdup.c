#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}
/**
 * *_memcpy - copy into memory location
 * @dest: char type pointer to destination array
 * @src: char type pointer to source array
 * @n: unsigned int type
 * Return: pointer to destination
 */

char *_strdup(char *str)
{
        char *ptr;
        int size;
        int x;

        size = _strlen(str) + 1;
        if (str == NULL)
        {
                return (NULL);
        }
        ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
        x = 0;
        while (x < size)
        {
                ptr[x] = str[x];
                x++;
        }
        return ptr;
}
