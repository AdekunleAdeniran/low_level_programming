#include "binary_trees.h"

/**
 * binary_tree_postorder - print postorder traversal (left, right, then parent)
 * @tree: pointer to node
 * @func: function to print
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
