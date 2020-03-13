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

	if (!(tree->left) && !(tree->right))
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
	int pow = 1;
	int leaf = binary_tree_leaves(tree);
	int height = binary_tree_height(tree);

	if (tree == NULL)
		return (0);

	while (height > 0)
	{
		pow *= 2;
		height -= 1;
	}

	if (leaf == pow)
		return (1);
	return (0);
}
