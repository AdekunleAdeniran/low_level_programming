#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc((nmemb) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < size)
	{
		ptr[count] = nmemb;
		count++;
	}
	ptr[count] = 0;
	return (ptr);
}
