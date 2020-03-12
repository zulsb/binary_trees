#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes
 * with at least 1 child in a binary tree.
 * @tree: Pointer to binary tree.
 * Return: The count of nodes with at least 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
