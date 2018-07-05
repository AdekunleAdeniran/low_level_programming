#include "binary_trees.h"
/**
 * binary_tree_levelorder - C function to print in level order
 * @tree: pointer to node to be printed
 * @func: function pointer
 * Return: printed data
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return (NULL);

	if (tree->parent == NULL)
		func(tree->n);
	if (tree->left != NULL)
		func(tree->left->n);
	if (tree->right != NULL)
		func(tree->right->n);
	if (tree->left != NULL)
		binary_tree_levelorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_levelorder(tree->right, func);
}
