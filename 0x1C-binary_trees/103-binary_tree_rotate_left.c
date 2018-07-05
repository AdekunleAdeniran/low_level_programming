#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate root node to left
 * @tree: root
 * Return: pointer to new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);

	if (tree->right)
	{
		tree->parent = tree->right;
		tree->right = (tree->parent)->left;
		if (tree->right)
			(tree->right)->parent = tree;
		(tree->parent)->left = tree;
		(tree->parent)->parent = NULL;
		return (tree->parent);
	}
	return (tree);
}
