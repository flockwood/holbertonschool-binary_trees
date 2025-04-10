#include "binary_trees.h"

/**
 * binary_tree_node - Counts the nodes with at least 1 child in the binary tree
 * @tree: Pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least 1 child
 * If tree is NULL, return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Check if the node has at least one child */
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/* If the node has no children, do not include */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
