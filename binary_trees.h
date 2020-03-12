#ifndef _BINARY_TREES_
#define _BINARY_TREES_

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**========================================================================*/
/**-STRUCTURES-& DEFINITIONS-----------------------------------------------*/
/**========================================================================*/

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/** Binary Search Tree */
typedef struct binary_tree_s bst_t;

/** AVL Tree */
typedef struct binary_tree_s avl_t;

/** Max Binary Heap */
typedef struct binary_tree_s heap_t;

/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/*Functions printing*/
void binary_tree_print(const binary_tree_t *);

/** 0. Function that creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/** 1. Function that inserts a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif
