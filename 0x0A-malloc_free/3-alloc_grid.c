#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = malloc(width * sizeof(int *));

	for (x = 0; x < width; x++)
	{
		ptr[x] = malloc(height * sizeof(int));
		if (ptr[x] == NULL)
		{
			return (NULL);
		}
		for (y = 0; y < height; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}