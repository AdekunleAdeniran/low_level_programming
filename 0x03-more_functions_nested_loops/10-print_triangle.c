#include "holberton.h"

/**
 * print_triangle - prints a triangle to the terminal
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int x, y, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		space = size - x;
		for (y = 1; y <= size; y++)
		{
			if (y < space)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
