#include "holberton.h"
#include "stdio.h"

/**
 * print_diagsums- sum diagonal values
 * @a: pointer to array of int type
 * @size: int type
 * Return: sum of two sides
 *
 */

void print_diagsums(int *a, int size)
{
	int x, y, suma, sumb;

	suma = 0;
	sumb = 0;

	for (x = 0;  x < size; x++)
		suma += a[(size + 1) * x];
	for (y =  0; y < size; y++)
		sumb += a[(size - 1) * (y + 1)];
	printf("%d, %d\n",  suma, sumb);
}
