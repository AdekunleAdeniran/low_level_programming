#include "binary_trees.h"
/**
 * binary_tree_insert_right - C function to add Binary Nodeto treee
 * @parent: Pointer to where new node will be added
 * @value: value to be inserted
 * Return: return pointer to New node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode  = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	/*check if parent-right is empty, put node here*/
	if (parent->right == NULL)
	{
		parent->right = newNode; /*assign parent-right to newNode*/
		newNode->right = NULL; /*assign newNode-left to NULL*/
	}
	else
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
		parent->right = newNode;
	}
	return (newNode);
}
