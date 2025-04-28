#include "binary_trees.h"

/**
* is_full - Helper function to check if a binary tree is full
* @tree: Pointer to the root node of the tree to check
* Return: 1 if tree is full, 0 otherwise
*/
int is_full(const binary_tree_t *tree)
{
	int is_full_node;

	if (!tree)
		return (1);
	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		is_full_node = 1;
	else
		is_full_node = 0;
	return (is_full_node && is_full(tree->left) && is_full(tree->right));
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full(tree));
}
