#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves. If the tree is NULL, return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* A leaf node has no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);


	/* Count leaves on the left and right subtrees recursively */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
