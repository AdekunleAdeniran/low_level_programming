#include "binary_trees.h"

#define MAX(a, b) ((a) >= (b) ? (a) : (b))

/**
 * height - calculate height
 * @tree: left or right subtree
 * Return: height
 */
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree || (tree->left || tree->right))
		return (1 + MAX(height(tree->left),
				height(tree->right)));

	return (0);
}

/**
 * binary_tree_balance - calculate left height minus right height
 * @tree: node
 * Return: balance_factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}
