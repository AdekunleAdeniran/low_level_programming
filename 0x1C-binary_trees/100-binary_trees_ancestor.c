#include "binary_trees.h"
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

	if (first->parent == second->parent)
		return (first->parent);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	left = binary_trees_ancestor(first->parent, second);
	right = binary_trees_ancestor(second->parent, first);

	if (left != NULL && right != NULL)
		return (first->parent);
	else if (left == NULL && right == NULL)
		return (NULL);
	else
		return (left == NULL ? right : left);
	return (NULL);
}
