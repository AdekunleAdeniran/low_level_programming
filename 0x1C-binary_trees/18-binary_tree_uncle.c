#include "binary_trees.h"

/**
 * binary_tree_sibling - C function to find sibling of a node in binary tree
 * @node: node to use for searching
 * Return: data at sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}

/**
 * binary_tree_uncle - C function to find uncle of a node in binary tree
 * @node: node to use for searching
 * Return: data of uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !((node->parent)->parent))
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
