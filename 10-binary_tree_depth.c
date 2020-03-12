#include "binary_trees.h"

/**
* binary_tree_depth - Function that measures the depth
* of a node in a binary tree.
* @node: Node to check.
* Return: Depth of node.
*/

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t dep;

	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (0);

	dep = 1 + binary_tree_depth(node->parent);
	return (dep);
}
