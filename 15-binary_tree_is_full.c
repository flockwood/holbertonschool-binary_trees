#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, otherwise 0.
 *         If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* A NULL tree is not considered full */
	if (tree == NULL)
		return (0);

	/* A leaf node is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* A full node must have both left and right children */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If one child is missing, the tree is not full */
	return (0);
}
