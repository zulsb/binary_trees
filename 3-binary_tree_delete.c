#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree.
 * @tree: Pointer to tree to delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}