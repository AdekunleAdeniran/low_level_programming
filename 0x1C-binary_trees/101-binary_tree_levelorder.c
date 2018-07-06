#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	if (height_l > height_r)
		return (height_l + 1);
	return (height_r + 1);
}
/**
 * printGivenLevel - C Function to print values at all levels of binary tree
 * @tree: pointer to tree/nodes whose values will be printed
 * @level: level at which values will be printed
 * Return: printed values
 */
void printGivenLevel(const binary_tree_t *tree, int level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		printf("%d\n", tree->n);
	else if (level > 1)
	{
		printGivenLevel(tree->left, level - 1);
		printGivenLevel(tree->right, level - 1);
	}
}
/**
 * printLevelOrder - C function to print in level order
 * @tree: pointer to node to be printed
 * Return: printed data
 */
void printLevelOrder(const binary_tree_t *tree)
{
	int height = binary_tree_height(tree);
	int count;

	for (count = 1; count <= height; count++)
		printGivenLevel(tree, count);

}
/**
 * binary_tree_levelorder - C function to print in level order
 * @tree: pointer to node to be printed
 * @func: function pointer
 * Return: printed data
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	printLevelOrder(tree);
}
