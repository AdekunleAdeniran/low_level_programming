#include "binary_trees.h"

/**
 * bst_search - search if node with given value exists in tree
 * @tree: tree
 * @value: value to search for
 * Return: pointer to node with that value, or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
