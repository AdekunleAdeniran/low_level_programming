#include "binary_trees.h"

/**
 * binary_tree_node - Function to made a binary tree
 * @parent: parent node
 * @value: value of parent node
 * Return: always successful
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
