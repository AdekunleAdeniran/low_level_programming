#include "binary_trees.h"
/**
 * is_leaf - check if no children
 * @tree: node
 * Return: 1 if leaf, 0 if not
 */
size_t is_leaf(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - C function to count nodes with at least one child
 * @tree: pointer to tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes + (!is_leaf(tree)));
}
