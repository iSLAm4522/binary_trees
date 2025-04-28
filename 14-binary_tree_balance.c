#include "binary_trees.h"

/**
* max - Returns the maximum of two integers
* @a: First integer
* @b: Second integer
* Return: The larger of a and b
*/
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height_of - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the tree, -1 if tree is NULL
 */
int height_of(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	if ((!tree->left && !tree->right))
		return (0);
	return (max(height_of(tree->left), height_of(tree->right)) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Balance factor of the tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height_of(tree->left) - height_of(tree->right));
}
