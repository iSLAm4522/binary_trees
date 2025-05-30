#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Pointer to the root node of the tree to measure
*
* Return: Size of the tree, 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftCount, rightCount;

	if (!tree)
		return (0);

	leftCount = binary_tree_size(tree->left);
	rightCount = binary_tree_size(tree->right);

	return (leftCount + rightCount + 1);
}
