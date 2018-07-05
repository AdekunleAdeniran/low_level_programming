#include "binary_trees.h"

/**
 * binary_tree_preorder - print preorder traversal (all left nodes, then right)
 * @tree: pointer to node
 * @func: function to print
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
