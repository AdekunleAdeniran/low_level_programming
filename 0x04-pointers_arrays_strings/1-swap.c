#include "holberton.h"

/**
 * swap_int - change the values of ints
 * @a: int type
 * @b: int type
 * Return: Return swapped values
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
