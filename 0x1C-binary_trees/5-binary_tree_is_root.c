#include "binary_trees.h"

/**
 * binary_tree_is_root - C function to check if node is root of a binary tree
 * @node: Pointer to node to check
 * Return: 0 if false, 1 if true
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
