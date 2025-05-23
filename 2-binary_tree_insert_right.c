#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node to insert the right child
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	/* Attach the parent's current right child to a new node */
	new_node->right = parent->right;

	/*If theres already a right child, update its parent */
	if (parent->right)
		parent->right->parent = new_node;

	/* Attach the new node as the parent's right child */
	parent->right = new_node;

	return (new_node);
}
