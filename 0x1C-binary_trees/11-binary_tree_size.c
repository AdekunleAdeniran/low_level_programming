#include "binary_trees.h"
/**
 * binary_tree_size - C function to print the size of a Node in a tree
 * @tree: pointer to tree/node to be checked
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? binary_tree_size(tree->left) : 0;
	height_r = tree->right ? binary_tree_size(tree->right) : 0;


	return (height_l + height_r + 1);
}
