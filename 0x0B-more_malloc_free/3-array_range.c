#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int count, arr;

	if (min > max)
	{
		return (NULL);
	}
	for (count =  min; count <= max; count++)
		;
	ptr = malloc(sizeof(int) * count);
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = min;
	while (arr <= max)
	{
		ptr[arr] = arr;
		arr++;
	}
	return (ptr);
}
