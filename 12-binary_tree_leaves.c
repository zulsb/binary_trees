#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree.
 * @tree: Pointer to root node.
 * Return: 1 for leaf.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!(tree->right) && !(tree->left))
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
