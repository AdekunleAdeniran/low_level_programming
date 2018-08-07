#include "search_algos.h"

/**
 * linear_search - Function to perform linear search on array
 * @array: Pointer to array to be searched
 * @size: Size of array to be search of type size_t
 * @value: value to be search inside array
 * Return: Return index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	for (indx = 0; indx < size; indx++)
	{
		printf("Value checked array[%lu] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
		{
			return (indx);
		}
	}
	return (-1);
}
