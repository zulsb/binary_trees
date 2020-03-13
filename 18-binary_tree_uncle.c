#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}

/**
 * *binary_tree_uncle - Function that finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 * Return: Pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
