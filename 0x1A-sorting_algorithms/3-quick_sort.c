#include "sort.h"
void swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

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
void sort(int *array, size_t start, size_t end, size_t size)
{
	size_t pIndex;

	if (end == 0 || end <= start)
		return;
	pIndex = partition(array, start, end, size);
	if (pIndex != 0 && pIndex >start)
		sort(array, start, pIndex - 1, size);
	if (pIndex < size - 1)
		sort(array, pIndex + 1, end, size);
}

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0 || size == 1)
		return;
	sort(array, 0, size - 1, size);
}
