#include "binary_trees.h"

/**
 * binary_tree_uncle - C function to find uncle of a node in binary tree
 * @node: node to use for searching
 * Return: data of uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !((node->parent)->parent))
		return (NULL);

	if ((node->parent)->parent->left)
		return ((node->parent)->parent->right);
	else if ((node->parent)->parent->right)
		return ((node->parent)->parent->left);
	else
		return (NULL);
}
