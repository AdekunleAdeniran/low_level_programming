#include "sort.h"
/**
 * selection_sort - sorts a list using selection sort
 *
 * @array: The list to be sorted
 * @size: The size of the list
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, m = 0, t = 0;

	if (array == NULL || size == 0)
		return;
	for ( ; i < size - 1; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[m])
				m = j;
		}
		if (array[m] == array[i])
			continue;
		t = array[m];
		array[m] = array[i];
		array[i] = t;
		print_array(array, size);
	}
}
