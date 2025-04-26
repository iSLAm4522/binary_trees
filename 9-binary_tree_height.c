#include "binary_trees.h"

/**
* maxVal - Returns the maximum of two size_t values
* @num1: First number to compare
* @num2: Second number to compare
* Return: The larger of num1 and num2
*/
size_t maxVal(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
* Return: Height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (maxVal(left_h, right_h) + 1);
}
