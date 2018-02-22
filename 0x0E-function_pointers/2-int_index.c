#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function to return index of compared int
 * @array: pointer to array of int type
 * @size: size of array of int type
 * @cmp: pointer to function of int type
 *
 * Return: return index number of comp int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]))
			return (ind);
	}
	return (-1);
}
