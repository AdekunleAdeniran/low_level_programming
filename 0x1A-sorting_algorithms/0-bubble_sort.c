#include "sort.h"

/**
 * bubble_sort - C function that uses uses the Bubble sort method in an array
 * @array: array of integers to sort
 * @size: the size of the array to be sorted
 * Return: sorted array
 */

void bubble_sort(int *array, size_t size)
{
	size_t check = size;
	size_t i, temp = 0;

	if (array == NULL || size == 0)
		return;
	while (check > 0)
	{
		for (i = 1; array && i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
			}
		}
		check--;
	}
}
