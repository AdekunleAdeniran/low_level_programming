#include "binary_trees.h"

/**
 * array_to_bst - builds binary search tree from given array;
 * utilizes bst_insert function that would insert into binary search tree
 *
 * @array: values for binary search tree nodes
 * @size: number of elements in array
 * Return: pointer to root of tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t idx;
	bst_t *root = NULL;

	if (!array)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		bst_insert(&root, array[idx]);

	return (root);
}
