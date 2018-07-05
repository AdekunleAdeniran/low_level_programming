#include "binary_trees.h"

/**
 * binary_tree_inorder - C function to print Tree in order traversal
 * @tree: tree to be printed
 * @func: function pointer to tree
 * Return: return printed data
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
