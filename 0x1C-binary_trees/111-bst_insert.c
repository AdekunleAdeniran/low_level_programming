#include "binary_trees.h"

/**
 * bst_insert - insert given node into tree
 * @tree: double pointer to root node of tree or NULL if no tree
 * @value: value for new node
 * Return: pointer to created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	binary_tree_t *newNode, *tmp, *parent;

	if (!tree)
		return (NULL);

	if (!(*tree))
	{
		/*use previous helper function to malloc and set node value*/
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	tmp = *tree;
	while (tmp)
	{
		parent = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}
	newNode = binary_tree_node(*tree, value);
	if (value < parent->n)
		parent->left = newNode;
	else
		parent->right = newNode;
	newNode->parent = parent;
	return (newNode);
}
