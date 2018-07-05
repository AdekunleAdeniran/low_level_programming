#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	/*recursively check the left and right node if exist*/
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_size - C function to print the size of a Node in a tree
 * @tree: pointer to tree/node to be checked
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += (binary_tree_size(tree->right)
		 + binary_tree_size(tree->left) + 1);
	return (size);
}

/**
 * to_power - a to power b (2 ^ height of tree)
 * @a: 2
 * @b: height of tree
 * Return: number of nodes at last level for bianry tree to be "perfect"
 */
size_t to_power(size_t a, size_t b)
{
	if (b == 0)
		return (1);
	if (a == 1)
		return (b);
	return (a * to_power(a, b - 1));
}

/**
 * binary_tree_is_perfect - checks if perfectly filled like a triangle
 * @tree: tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t expected_num_nodes;

	if (!tree)
		return (0);

	expected_num_nodes = (to_power(2, (binary_tree_height(tree)) + 1) - 1);
	return (binary_tree_size(tree) == expected_num_nodes);
}
