#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_left - Inserts a node as the left-child of another node
* @parent: Pointer to the node to insert the left-child in
* @value: Value to store in the new node
* Return: Pointer to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->left)
	{
		binary_tree_t *temp = parent->left;

		parent->left = new_node;
		new_node->left = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->left = NULL;
	}

	return (new_node);
}
