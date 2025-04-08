#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pe-order traversal
 * @tree: Pointer to the root of the node of the tree traverse
 * @func: Pointer to a function to call for each node. The value on the node
 * is passed as a parameter to this function
 *
 * Description: Pre-order traversal visits nodes in the order:
 * Root -> Left -> Right
 * If the tree ir func is NULL, the function does nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
