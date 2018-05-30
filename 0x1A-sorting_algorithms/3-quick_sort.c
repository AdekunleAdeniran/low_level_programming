#include "sort.h"
/**
 * swap - C function to swap values on arrays
 * @a: pointer to array
 * @b: pointer to array
 * Return: swapped arrays
 */
void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - C function to create a partition in an array for quick sort
 * @array: pointer to array to be partitioned
 * @start: start of array to be partitioned
 * @end: end of the array to be partioned, used as pivot
 * @size: size of array to be partitioned
 * Return: return partitioned array
 */
size_t partition(int *array, size_t start, size_t end, size_t size)
{
	size_t count;

	for (count = start; count < end; count++)
	{
		if (array[count] < array[end])
		{
			if (count != start)
			{
				swap(&array[start], &array[count]);
				print_array(array, size);
			}
			start++;
		}
	}
	if (array[start] > array[end])
	{
		swap(&array[start], &array[end]);
		end = start;
		print_array(array, size);
	}
	return (end);
}

/**
 * sort - C function to sort partitioned array
 * @array: pointer to array to be sorted
 * @start: start of array(left side of array)
 * @end: end of array(right side of array)
 * @size: size of array
 * Return: sorted partitions of array
 */
void sort(int *array, size_t start, size_t end, size_t size)
{
	size_t pIndex;

	if (end == 0 || end <= start)
		return;
	pIndex = partition(array, start, end, size);
	if (pIndex != 0 && pIndex > start)
		sort(array, start, pIndex - 1, size);
	if (pIndex < size - 1)
		sort(array, pIndex + 1, end, size);
}
/**
 * quick_sort - C function to perform quick sort
 * @array: array to be sorted
 * @size: size of array to be sorted
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0 || size == 1)
		return;
	sort(array, 0, size - 1, size);
}
