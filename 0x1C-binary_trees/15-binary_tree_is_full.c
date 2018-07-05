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
 * binary_tree_is_full - C function to check if binary tree is full
 * @tree: pointer to tree/node to be checked
 * Return: 1 if true, 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes_l, nodes_r;

	if (!tree)
		return (0);
	if (is_leaf(tree))
		return (1);

	nodes_l = binary_tree_is_full(tree->left);
	nodes_r = binary_tree_is_full(tree->right);

	if (nodes_l == 0 || nodes_r == 0)
		return (0);
	return (1);
}
