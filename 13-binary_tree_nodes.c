#include <stdlib.h>
#include "binary_trees.h"


/**
 *binary_tree_nodes- Function that counts the nodes with at least 1 child,
 *in a binary tree.
 *
 *@tree: Pointer to the root node of the tree to count the number of nodes.
 *
 *Return:If tree is NULL, your function must return 0.
 *->A NULL pointer is not a node.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
