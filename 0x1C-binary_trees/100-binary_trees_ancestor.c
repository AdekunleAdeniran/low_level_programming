#include "binary_trees.h"

/**
 * binary_tree_depth - calculate levels from parent
 * @node: node
 * Return: levels node is from parent
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node && (node->parent))
		return (1 + binary_tree_depth(node->parent));

	return (0);
}
/**
 * binary_trees_ancestor - C function to find common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to ancestor node
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *left, *right;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);

	left = binary_trees_ancestor(first->parent, second);
	right = binary_trees_ancestor(second->parent, first);

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (left);
	else if (binary_tree_depth(second) > binary_tree_depth(first))
		return (right);
	return (binary_trees_ancestor(first->parent, second->parent));
}
