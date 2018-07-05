#include "binary_trees.h"

/**
 * is_bst - recursively check subtrees (left data < right data)
 * @tree: root
 * @l: min value
 * @r: max value
 * Return: 1 if yes, 0 if not
 */
int is_bst(const binary_tree_t *tree,
	   const binary_tree_t *l,
	   const binary_tree_t *r)
{
	if (!tree)
		return (1);
	if (l && l->n >= tree->n)
		return (0);
	if (r && r->n <= tree->n)
		return (0);
	return (is_bst(tree->left, l, tree) &&
		is_bst(tree->right, tree, r));
}

/**
 * binary_tree_is_bst - check if binary search tree (left data < right data)
 * @tree: root
 * Return: 1 if yes, 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_bst(tree, NULL, NULL));
}
