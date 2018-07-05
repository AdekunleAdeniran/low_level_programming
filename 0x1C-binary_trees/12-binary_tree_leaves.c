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
 * binary_tree_leaves - calculate total leaves
 * @tree: node
 * Return: total leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves + is_leaf(tree));
}
