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
* height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure
* Return: Height of the tree, 0 if tree is NULL
*/
int height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (max(height(tree->left), height(tree->right)) + 1);
}

/**
* is_perfect - Checks if a binary tree is perfect at a given depth
* @tree: Pointer to the root node of the tree to check
* @tree_height: Height of the complete tree
* @depth: Current depth in the tree
* Return: 1 if tree is perfect, 0 otherwise
*/
int is_perfect(const binary_tree_t *tree, int tree_height, int depth)
{
	int is_perfect_node;

	if (!tree)
		return (1);

	is_perfect_node = (tree->left && tree->right) ||
	(!tree->left && !tree->right && tree_height == depth);

	return (is_perfect_node && is_perfect(tree->left, tree_height, depth + 1) &&
		is_perfect(tree->right, tree_height, depth + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_height;

	if (!tree)
		return (0);
	tree_height = height(tree);
	return (is_perfect(tree, tree_height, 0));
}
