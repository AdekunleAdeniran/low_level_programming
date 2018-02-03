#include "holberton.h"

/**
 * reverse_array - reverse an array of int
 * @a: pointer to an array
 * @n: int type for size of array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; j >= i; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = 0; i < n; i++)
		;
}
