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
* binary_tree_balance - Function that measures
* the balance factor of a binary tree.
* @tree: Pointer to root node of tree.
* Return: Balance of tree.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
