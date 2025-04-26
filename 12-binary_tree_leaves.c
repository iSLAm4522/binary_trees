#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of leaves in the tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftCount, rightCount;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leftCount = binary_tree_leaves(tree->left);
	rightCount = binary_tree_leaves(tree->right);
	return (leftCount + rightCount);
}
