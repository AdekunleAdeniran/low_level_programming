#include "binary_trees.h"
/**
 * _nodes - C function to count nodes with at least one child
 * @tree: pointer to tree
 * Return: number of nodes
 */
size_t _nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + _nodes(tree->left) + _nodes(tree->right));
}

/**
 * isComplete - C Function helper to check if binary tree is complete
 * @index: index of root
 * @tree: pointer to node
 * @number_nodes: total nodes in tree
 * Return: 1 if complete, 0 if not
 */
int isComplete(const binary_tree_t *tree, size_t index, size_t number_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= number_nodes)
		return (0);
	return (isComplete(tree->left, (2 * index + 1), number_nodes) &&
		isComplete(tree->right, (2 * index + 2), number_nodes));
}

/**
 * binary_tree_is_complete - C function to check if binary tree is complete
 * @tree: pointer to node of tree to check
 * Return: 1 if complete or 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	return (isComplete(tree, 0, _nodes(tree)));
}
