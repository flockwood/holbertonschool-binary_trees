#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Recursively traverses the tree in post-order,
 * deleting left and right subtrees before the root
 * If the tree is NULL it does nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Delete the current node */
	free(tree);
}
