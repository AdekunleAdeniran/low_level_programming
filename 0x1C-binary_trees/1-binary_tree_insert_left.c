#include "binary_trees.h"
/**
 * binary_tree_insert_left - C function to insert node to left side of tree
 * @parent: pointer to node addition
 * @value: value to be added
 * Return: return pointer to new node added
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->left = NULL;
	}
	else
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
		parent->left = newNode;
	}
	return (newNode);

}
