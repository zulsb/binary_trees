#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: Pointer to node.
 * Return: The height of a node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);

	h_left = (1 + binary_tree_height(tree->left));
	h_right = (1 + binary_tree_height(tree->right));

	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Pointer to node.
 * Return: 1 if perfect, 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);

	if (binary_tree_height(tree->left) == 0)
		return (0);

	if (binary_tree_height(tree->right) != binary_tree_height(tree->left))
		return (0);

	return (1);
}
